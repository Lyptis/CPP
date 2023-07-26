/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:53:52 by svanmeen          #+#    #+#             */
/*   Updated: 2023/07/26 15:29:07 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.cpp"

int	main(void){
	Contact	contact;
	std::string	tmp;

	std::cout << "Waiting...";
	std::cin >> tmp;
	if (tmp == "ADD")
		contact.Add();
}
