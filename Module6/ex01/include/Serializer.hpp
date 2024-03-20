/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:17:35 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/20 14:57:32 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Serializer_HPP
# define Serializer_HPP

# include <stdint.h>
# include <iostream>

typedef struct s_data {
	char *number;
}		Data;

class	Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &Serializer);
	public:
		Serializer	&operator=(const Serializer &Serializer);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};

#endif
