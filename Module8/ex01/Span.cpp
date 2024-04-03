/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:34:54 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/03 14:36:12 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Span.hpp"

Span::Span(void){}

Span::Span(unsigned int N): _size(N) {
	_tab.reserve(N);
}

Span::~Span(){
}

Span::Span(const Span &Span) {
	*this = Span;
}

Span	&Span::operator=(const Span &Span) {
	if (this != &Span) {
		_size = Span._size;
		_tab = Span._tab;
	}
	return (*this);
}


void	Span::addNumber(int number) {
	_tab.push_back(number);
}


unsigned int Span::getSize() const {
	return (_size);
}

int	Span::at(unsigned int &i) {
	return (_tab.at(i));
}

std::ostream &operator<<(std::ostream &out, Span &p) {
	for (unsigned int i = 0; i < p.getSize(); i++) {
		out << p.at(i) << std::endl;
	}
	return out;
}
