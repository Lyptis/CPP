/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:18:31 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/21 15:23:26 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Form.hpp"

Form::Form(void){
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int sign, unsigned int exec): _name(name), _sGrade(sign), _eGrade(exec) {
	if (sign < 1)
		throw FormGradeTooHighException();
	if (sign > 150)
		throw FormGradeTooLowException();
	if (exec < 1)
		throw FormGradeTooHighException();
	if (exec > 150)
		throw FormGradeTooLowException();
	_signed = false;
	std::cout << "Form constructor called" << std::endl;
}

Form::~Form(){
	std::cout << "Form default destructor called" << std::endl;
}

Form::Form(const Form &form), _name(form._name),   {
	std::cout << "Form copy constructor called" << std::endl;
	*this = Form;
}

Form	&Form::operator=(const Form &Form) {
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &Form) {
		;
	}
	return (*this);
}
