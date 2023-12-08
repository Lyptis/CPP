/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:03:50 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 17:17:01 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class FormNotSignedException : public std::exception
{
	public:
		const char *what() const throw();
};

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
	protected:
		const std::string _name;
		bool _signed;
		const unsigned int _sGrade;
		const unsigned int _eGrade;
		Form();
	public:
		Form(std::string name, unsigned int sign, unsigned int exec);
		Form(const Form &Form);
		virtual ~Form();
		Form	&operator=(const Form &form);

		std::string getName() const;
		bool		getSigned() const;
		unsigned int getsGrade() const;
		unsigned int geteGrade() const;

		void	beSigned(Bureaucrat &Bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &cout, const Form &form);
#endif
