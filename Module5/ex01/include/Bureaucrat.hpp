/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:10:11 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/21 14:47:51 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class	GradeTooHighException : public std::exception
{
	public :
		const char *what() const throw();
};

class	GradeTooLowException : public std::exception
{
	public :
		const char *what() const throw();
};

class	Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &Bureaucrat);
		~Bureaucrat();

		std::string	getName(void) const;
		unsigned int	getGrade(void) const;

		void	incGrade(void);
		void	decGrade(void);

		Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
};

std::ostream	&operator<<(std::ostream &cout, const Bureaucrat &bur);

#endif
