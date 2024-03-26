/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:43:56 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/26 08:08:42 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>

template <typename T>
class	Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : _array(new T[0]()), _size(0) {};
		Array(unsigned int n) : _array(new T[n]()), _size(n) {};
		Array(const Array &Array) {
			*this = Array;
		};
		~Array() {
			delete[] _array;
		};
		Array	&operator=(const Array &Array) {
			if (this != &Array) {
				if (_array)
					delete[] _array;
				_size = Array._size;
				_array = new T[_size]();
				for (unsigned int i = 0; i < _size; i++) {
					_array[i] = Array._array[i];
				}
			}
			return *this;
		};
		unsigned int	size() const {
			return _size;
		};
		T		&operator[](unsigned int i) {
			if (i >= _size) {
				throw OutOfRangeExepction();
			}
			return _array[i];
		};
		const T	&operator[](unsigned int i) const {
			if (i >= _size) {
				throw OutOfRangeExepction();
			}
			return _array[i];
		};

		class OutOfRangeExepction : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Index out of range";
				};
		};
};

#endif
