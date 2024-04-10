/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:33:48 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/10 17:18:36 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Usage: ./RPN <arg>" << std::endl;
		return (1);
	}
	std::queue<int> rpn;
	try {
		rpn = parse(argv[1]);
		int ret = calc(&rpn);
		std::cout << ret << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (1);
}
