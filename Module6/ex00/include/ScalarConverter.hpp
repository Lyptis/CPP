/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:42:36 by svanmeen          #+#    #+#             */
/*   Updated: 2024/01/17 13:57:22 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER.hpp
#define SCALARCONVERTER .hpp

#include <string>

class ScalarConverter
{
private:
	ScalarConverter();

public:
	ScalarConverter(const ScalarConverter &ScalarConverter);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &ScalarConverter);
	static char convert(std::string str);
};

#endif
