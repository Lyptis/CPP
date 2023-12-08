/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:20:15 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 17:20:57 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5){
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
	_target = target;
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm) : Form("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = PresidentialPardonForm;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &PresidentialPardonForm) {
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &PresidentialPardonForm) {
		;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _eGrade)
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
