/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:19:08 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 17:28:18 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationFormFileOpenException : public std::exception {
	public:
		const char *what() const throw();
};

class	ShrubberyCreationForm : public Form
{
	private:
		std::string _target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &ShrubberyCreationForm);

		void	execute(Bureaucrat const &executor) const;
};
