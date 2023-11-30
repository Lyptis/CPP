/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:03:50 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/30 10:58:49 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class FormAlreadySignedException : public std::exception
{
	public:
		const char *what() const throw();
};

class FormGradeTooHighException : public std::exception
{
	public:
		const char *what() const throw();
};

class FormGradeTooLowException : public std::exception
{
	public:
		const char *what() const throw();
};

class	Form
{
	private:
		const std::string _name;
		bool _signed;
		const unsigned int _sGrade;
		const unsigned int _eGrade;
		Form();
	public:
		Form(std::string name, unsigned int sign, unsigned int exec);
		Form(const Form &Form);
		~Form();
		Form	&operator=(const Form &form);

		std::string getName() const;
		bool		getSigned() const;
		unsigned int getsGrade() const;
		unsigned int geteGrade() const;

		void	beSigned(Bureaucrat &Bureaucrat);
};

std::ostream	&operator<<(std::ostream &cout, const Form &form);
#endif
