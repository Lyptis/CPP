/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:33:15 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/20 14:11:34 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdlib.h>
#include <climits>
#include <limits.h>
#include <math.h>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &ScalarConverter) {
	*this = ScalarConverter;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ScalarConverter) {
	if (this != &ScalarConverter) {}
	return (*this);
}

void ScalarConverter::convert(std::string str) {
	char *pend;
	char c;
	int i;
	float f;
	double d;

	if (str[str.size() - 1] == 'f' && (str[str.size() - 2] == 'f' || isdigit(str[str.size() - 2]) || !str.compare("nanf"))) {
		str.erase(str.end()-1);
	}
	d = strtod(str.c_str(), &pend);
	if (*pend != '\0')
		throw InvalidInputExecption();
	if (!str.compare("nan") || d > 255 || d < 0)
		std::cout << "char : impossible" << std::endl;
	else if (!isprint(d))
		std::cout << "char : none printable" << std::endl;
	else {
		c = static_cast<char>(d);
		std::cout << "char : '" << c << "'" <<std::endl;
	}
	if (!str.compare("nan") || d > INT_MAX || d < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else {
		i = static_cast<int>(d);
		std::cout << "int : " << i << std::endl;
	}
	f = static_cast<float>(d);
	std::cout << "float : " << f << "f" << std::endl;
	std::cout << "double : " << d << std::endl;
}

const char* ScalarConverter::InvalidInputExecption::what() const throw() {
	return ("Invalid Input Exception");
}
