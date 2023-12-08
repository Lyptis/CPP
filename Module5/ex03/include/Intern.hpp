/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:38:52 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 17:55:09 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class InternUnknownFormException : public std::exception
{
	public:
		const char *what() const throw();
};

class	Intern
{
	private:
		Form	*_makeShrubberyCreationForm(std::string target);
		Form	*_makeRobotomyRequestForm(std::string target);
		Form	*_makePresidentialPardonForm(std::string target);
	public:
		Intern();
		Intern(const Intern &Intern);
		~Intern();
		Intern	&operator=(const Intern &Intern);

		Form	*makeForm(std::string formName, std::string target);
};

typedef void (Intern::*InternFct)(std::string target);
