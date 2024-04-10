/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyptis <lyptis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:24:06 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/04 13:10:43 by lyptis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>
# include <iostream>
# include <exception>
# include <algorithm>

class Span {
	private:
		unsigned int _size;
		std::list<int> _tab;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &Span);
		~Span();

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void fill (unsigned int begin, unsigned int end, int value);

		unsigned int getSize() const;
		int	at(unsigned int &i);

		Span &operator=(const Span &Span);

		class SpanSizeException: public std::exception {
			virtual const char *what() const throw();
		};
};

#endif
