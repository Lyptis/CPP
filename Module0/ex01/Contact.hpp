/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:06:17 by svanmeen          #+#    #+#             */
/*   Updated: 2023/07/26 15:29:55 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iomanip>
# include <ctime>

class Contact
{
public:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int			phone_number;
	std::string	secret;
	std::tm		*timestamp;

	Contact();
	~Contact();

	void	Add();
};

#endif
