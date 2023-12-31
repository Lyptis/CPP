/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:09:37 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 17:58:10 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/AForm.hpp"
#include "include/Bureaucrat.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat Boss("Boss", 1);
		Bureaucrat Employee("Employee", 150);
		Bureaucrat Manager("Manager", 50);
		Intern intern;

		std::cout << Boss << std::endl;
		std::cout << Employee << std::endl;
		std::cout << Manager << std::endl;
		
		
		std::cout << std::endl << "Creating forms:" << std::endl;
		Form *ppf = intern.makeForm("presidential pardon", "Employee");
		Form *rrf = intern.makeForm("robotomy request", "Employee");
		Form *scf = intern.makeForm("shrubbery creation", "Employee");
		
		std::cout << std::endl << "Employee Signing forms:" << std::endl;
		Employee.signForm(*ppf);
		Employee.signForm(*rrf);
		Employee.signForm(*scf);
		
		std::cout << std::endl << "Employee executing forms:" << std::endl;
		Employee.executeForm(*ppf);
		Employee.executeForm(*rrf);
		Employee.executeForm(*scf);

		std::cout << std::endl << "Manager Signing forms:" << std::endl;
		Manager.signForm(*ppf);
		Manager.signForm(*rrf);
		Manager.signForm(*scf);
		
		std::cout << std::endl << "Manager executing forms:" << std::endl;
		Manager.executeForm(*ppf);
		Manager.executeForm(*rrf);
		Manager.executeForm(*scf);

		std::cout << std::endl << "Boss Signing forms:" << std::endl;
		Boss.signForm(*ppf);
		Boss.signForm(*rrf);
		Boss.signForm(*scf);

		std::cout << std::endl << "Boss executing forms:" << std::endl;
		Boss.executeForm(*ppf);
		Boss.executeForm(*rrf);
		Boss.executeForm(*scf);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}
