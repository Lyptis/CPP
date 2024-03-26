/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:14:52 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/26 08:29:47 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <algorithm>
# include <iostream>

class ElementNotFoundException : public std::exception {
	virtual const char *what() const throw() {
		return "Element not found";
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int nb) {
	typename T::iterator it = std::find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw ElementNotFoundException();
	return it;
};


#endif
