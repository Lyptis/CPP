/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:42:36 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/20 13:05:12 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter
{
private:
	ScalarConverter();

public:
	ScalarConverter(const ScalarConverter &ScalarConverter);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &ScalarConverter);
	static void convert(std::string str);

	class InvalidInputExecption : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif
