/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:21:35 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/21 14:47:06 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	if (grade <= 0)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "Bureaucrat " << name << " was created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) : _name(Bureaucrat._name), _grade(Bureaucrat._grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat was destroyed" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &Bureaucrat) {
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &Bureaucrat) {
		_grade = Bureaucrat.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return (_name);
}

unsigned int	Bureaucrat::getGrade(void) const {
	return (_grade);
}

void	Bureaucrat::incGrade(void) {
	if (_grade - 1 <= 0)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decGrade(void) {
	if (_grade + 1 > 150)
		throw GradeTooHighException();
	_grade++;
}

std::ostream	&operator<<(std::ostream &cout, const Bureaucrat &bur){
	cout << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (cout);
}

const char *GradeTooHighException::what() const throw() {
	return("Bureaucrat::GradeTooHighException");
}

const char *GradeTooLowException::what() const throw() {
	return("Bureaucrat::GradeTooLowException");
}
