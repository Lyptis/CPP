/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:36:07 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/10 17:29:54 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

std::queue<int> parse(std::string str)
{
	std::queue<int> ret;
	if (str.empty())
		throw InvalidArgumentException();
	if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')
		throw InvalidArgumentException();
	for (int i = 0; str[i]; i++) {
		if (isdigit(str[i]))
			ret.push(str[i] - '0');
		else if (isspace(str[i]))
			continue;
		else if (str[i] == '+')
			ret.push(str[i]);
		else if (str[i] == '-')
			ret.push(str[i]);
		else if (str[i] == '*')
			ret.push(str[i]);
		else if (str[i] == '/')
			ret.push(str[i]);
		else
			throw InvalidArgumentException();
	}
	return (ret);
}

int	calc(std::queue<int> *rpn) {
	int ret = rpn->front();
	rpn->pop();

	while (!rpn->empty()) {;
		if (rpn->front() == '+') {
			rpn->pop();
			if (!rpn->empty() && isdigit(rpn->front()))  //sam t'es un con isdigit check pour un int entre 48 et 57 alors que dans rpn on a des int entre 0 et 9
				ret += rpn->front();
			else
				throw InvalidArgumentException();
		}
		else if (rpn->front() == '-') {
			rpn->pop();
			if (rpn->empty() || isdigit(rpn->front()) == 0)
				throw InvalidArgumentException();
			ret -= rpn->front();
		}
		else if (rpn->front() == '*') {
			rpn->pop();
			if (rpn->empty() || isdigit(rpn->front()) == 0)
				throw InvalidArgumentException();
			ret *= rpn->front();
		}
		else if (rpn->front() == '/') {
			rpn->pop();
			if (rpn->empty() || isdigit(rpn->front()) == 0)
				throw InvalidArgumentException();
			ret /= rpn->front();
		}
		else if (isdigit(rpn->front()) == 0) {
			ret *= rpn->front();
		}
		else
			throw InvalidArgumentException();
		rpn->pop();
	}
	return (ret);
}

const char *InvalidArgumentException::what() const throw()
{
	return ("Invalid argument");
}
