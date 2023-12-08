/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:41:47 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 18:00:02 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Intern.hpp"
#include "include/AForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/ShrubberyCreationForm.hpp"

Intern::Intern(void){
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern(){
	std::cout << "Intern default destructor called" << std::endl;
}

Intern::Intern(const Intern &Intern) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = Intern;
}

Intern	&Intern::operator=(const Intern &Intern) {
	std::cout << "Intern assignment operator called" << std::endl;
	if (this != &Intern) {
		;
	}
	return (*this);
}

Form	*Intern::_makeShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::_makeRobotomyRequestForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form* Intern::_makePresidentialPardonForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string formName, std::string target) {
	typedef Form* (Intern::*InternFct)(std::string);
	InternFct fct[3] = {&Intern::_makeShrubberyCreationForm, &Intern::_makeRobotomyRequestForm, &Intern::_makePresidentialPardonForm};
	std::string formNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++) {
		if (formNames[i].compare(formName) == 0)
			return (this->*fct[i])(target);
	}
	throw InternUnknownFormException();
}

const char *InternUnknownFormException::what() const throw() {
		return ("Unknown Form Exception");
	}
