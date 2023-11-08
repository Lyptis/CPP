/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:07:53 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 11:05:50 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void errorPrint()
{
	std::cout << "Error: invalid arguments" << std::endl;
}

std::string SplitFilename(const std::string &str)
{
	std::size_t found = str.find_last_of("/\\");
	return (str.substr(found + 1));
}

int main(int argc, char **argv)
{
	std::string str;

	size_t pos = 0;
	size_t len = 0;

	if (argc != 4)
		return (errorPrint(), 1);
	std::string str1(argv[2]);
	std::string str2(argv[3]);
	std::ifstream input(argv[1]);
	std::ofstream output(SplitFilename(argv[1]).append(".replace").c_str());
	if (!input.is_open() || !output.is_open())
		return (errorPrint(), 1);
	while (std::getline(input, str))
	{
		len = 0;
		while ((pos = str.find(str1, pos + 1)) != str.npos)
		{
			while (len < pos)
			{
				output.put(str[len]);
				len++;
			}
			len += str1.length();
			for (size_t i = 0; i != str2.length(); i++)
				output.put(argv[3][i]);
		}
		while (len < str.length())
		{
			output.put(str[len]);
			len++;
		}
		output << std::endl;
	}
	return 0;
}
