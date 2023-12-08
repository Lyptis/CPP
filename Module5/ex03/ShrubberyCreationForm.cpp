/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:49:16 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 17:26:49 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137){
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137){
	_target = target;
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm): Form("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = ShrubberyCreationForm;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationForm) {
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	if (this != &ShrubberyCreationForm) {
		;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _eGrade)
		throw GradeTooLowException();
	
	std::ofstream file((_target + "_shrubbery").c_str(), std::ios::out | std::ios::trunc);
	if (!file)
		throw ShrubberyCreationFormFileOpenException();
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
}

const char *ShrubberyCreationFormFileOpenException::what() const throw() {
	return ("ShrubberyCreationForm::FileOpenException");
}
