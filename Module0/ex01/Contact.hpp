/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:06:17 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/29 10:00:16 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iomanip>
# include <ctime>

class Contact
{
private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;
	std::time_t		timestamp;

public:
	Contact();
	~Contact();
	void	Fill();
	void	Clear();
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string	get_secret();
	std::string	get_phone_number();
	std::time_t		get_timestamp();
};

#endif
