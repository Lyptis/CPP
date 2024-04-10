/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:26:46 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/10 16:02:52 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <math.h>
#include <algorithm>

class FileException : public std::exception {
	public:
		const char *what() const throw();
};

class BadInputException : public std::exception {
	public:
		const char *what() const throw();
};

class NegNumberException : public std::exception {
	public:
		const char *what() const throw();
};

class NumberTooBigException : public std::exception {
	public:
		const char *what() const throw();
};


std::map<std::string, float> parsedata();
void parseinput(char *file, std::map<std::string, float> tab);

#endif
