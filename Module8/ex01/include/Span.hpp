/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:24:06 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/03 14:34:24 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <exception>

class Span {
	private:
		unsigned int _size;
		std::vector<int> _tab;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &Span);
		~Span();

		void addNumber(int number);

		unsigned int getSize() const;
		int	at(unsigned int &i);

		Span &operator=(const Span &Span);
};

std::ostream &operator<<(std::ostream &out, Span &p);

#endif
