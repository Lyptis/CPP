/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:27:07 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/08 14:49:12 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <ctime>
#include <sstream>

int	isKey(std::string key) {
	std::tm tm;
	if (!strptime(key.c_str(), "%Y-%m-%d", &tm)) {
		if (key.compare("date "))
			std::cout << "Error: bad input => " << key << std::endl;
		return (1);
	}
	return (0);
}

float getval2(std::string line, char c) {
	float	ret;
	int pos = line.find_first_of(c);
	std::string strval = line.substr(++pos);

	ret = atof(strval.c_str());
	if (ret < 0)
		throw NegNumberException();
	else if (ret > 1000)
		throw NumberTooBigException();
	return (ret);
}

std::string getkey(std::string line, char c) {
	int pos = line.find_first_of(c);
	return (line.substr(0, pos));
}

float getval(std::string line, char c) {
	float	ret;
	int pos = line.find_first_of(c);
	std::string strval = line.substr(++pos);

	ret = atof(strval.c_str());
	if (ret < 0)
		throw NegNumberException();
	return (ret);
}

std::map<std::string, float> parsedata() {
	std::map<std::string, float> ret;
	std::string key;
	float val;
	std::string line;
	std::ifstream data("data.csv");
	if (!data.is_open())
		throw FileException();
	getline(data, line);
	while (getline(data, line)) {
		key = getkey(line, ',');
		val = getval(line, ',');
		ret.insert(std::map<std::string, float>::value_type(key, val));
	}
	data.close();
	return ret;
}

void parseinput(char *file, std::map<std::string, float> tab) {
	(void)tab;
	std::map<std::string, float> ret;
	std::string key;
	float val;
	std::string line;
	std::ifstream data(file);
	if (!data.is_open())
		throw FileException();
	while (getline(data, line)) {
		try {
			key = getkey(line, '|');
			if (!isKey(key)) {
				val = getval2(line, '|');
				std::cout << key << " = " << val << std::endl;
			}
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	data.close();
}

const char *FileException::what() const throw() {
	return ("File Error");
}


const char *BadInputException::what() const throw() {
	return ("Error: bad input => ");
}

const char *NegNumberException::what() const throw() {
	return ("Error: not a positive number.");
}

const char *NumberTooBigException::what() const throw() {
	return ("Error: too large a number.");
}
