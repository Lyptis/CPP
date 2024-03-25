/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:00:31 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/21 14:59:02 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T, typename U>
void iter(T *array, U size, void (*p)(T &)) {
	if (size <= 0 || !array || !p) {
		return;
	}
	for (U i = 0; i < size; i++) {
		p(array[i]);
	}
}

template <typename T, typename U>
void iter(const T *array, U size, void (*p)(const T &)) {
	if (size <= 0 || !array || !p) {
		return;
	}
	for (U i = 0; i < size; i++) {
		p(array[i]);
	}
}

#endif
