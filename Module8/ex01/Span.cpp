/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyptis <lyptis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:34:54 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/04 13:29:23 by lyptis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Span.hpp"

Span::Span(void){}

Span::Span(unsigned int N): _size(N) {
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
	if (_tab.size() >= _size)
		throw SpanSizeException();
	_tab.push_back(number);
}

int	Span::shortestSpan() {
	if (_tab.size() < 2)
		throw SpanSizeException();
	std::list<int> tmp = _tab;
	tmp.sort();
	int val = tmp.front();
	tmp.pop_front();
	int min = tmp.front() - val;
	for (unsigned int i = 1; i < tmp.size(); i++) {
		val = tmp.front();
		tmp.pop_front();
		if (tmp.front() - val < min)
			min = tmp.front() - val;
	}
	return (min);
}

void Span::fill(unsigned int begin,unsigned int end, int value) {
	if (begin < 0 || end > _size)
		throw SpanSizeException();
	while (_tab.size() <= begin)
		_tab.push_back(0);
	while (begin < end)
	{
		_tab.push_back(value);
		begin++;
	}
}

int Span::longestSpan() {
	if (_tab.size() < 2)
		throw SpanSizeException();
	std::list<int> tmp = _tab;
	tmp.sort();
	int val = tmp.back();
	tmp.pop_back();
	return (val - tmp.back());
}

unsigned int Span::getSize() const {
	return (_size);
}

int	Span::at(unsigned int &i) {
	if (i >= _size)
		throw SpanSizeException();
	std::list<int> tmp = _tab;
	for (unsigned int j = 0; j < i; j++) {
		tmp.pop_front();
	}
	return (tmp.front());
}

const char *Span::SpanSizeException::what() const throw() {
	return ("SpanSizeExecption: Trying accesing non-existing element.");
}