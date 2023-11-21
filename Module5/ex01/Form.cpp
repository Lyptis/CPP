/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:18:31 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/21 15:45:15 by svanmeen         ###   ########.fr       */
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

Form::Form(const Form &Form): _name(Form._name), _signed(Form._signed), _sGrade(Form._sGrade), _eGrade(Form._eGrade) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form	&Form::operator=(const Form &Form) {
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &Form) {
		_signed = Form._signed;
	}
	return (*this);
}

std::string	Form::getName() const {
	return (_name);
}

bool		Form::getSigned() const {
	return (_signed);
}

unsigned int Form::getsGrade() const {
	return (_sGrade);
}

unsigned int Form::geteGrade() const {
	return (_eGrade);
}

void	Form::beSigned(Bureaucrat &Bureaucrat) {
	
}

std::ostream	&operator<<(std::ostream &cout, const Form &form)
{
	cout << "form : " << form.getName() << " signed : " << form.getSigned() << " grade form sign : " << form.getsGrade() << " grade for exec : " << form.geteGrade();
	return (cout);
}

