/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:42:49 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 17:34:53 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45){
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
	_target = target;
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) : Form("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = RobotomyRequestForm;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm) {
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	if (this != &RobotomyRequestForm) {
		;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _eGrade)
		throw GradeTooLowException();
	srand (time(NULL));
	int i = rand() % 2;
	std::cout << "* drilling noises *" << std::endl;
	if (i == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " has failed to be robotomized" << std::endl;
}
