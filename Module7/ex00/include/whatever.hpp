/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:04:30 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/21 12:26:52 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

template <typename T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T min(T &x, T &y) {
	return (x < y ? x : y);
}

template <typename T>
const T min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

template <typename T>
T max(T &x, T &y) {
	return (x > y ? x : y);
}

template <typename T>
const T max(const T &x, const T &y) {
	return (x > y ? x : y);
}

#endif
