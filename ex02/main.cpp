/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:21:59 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 14:25:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"

int main()
{
	Bureaucrat		b;
	RobotomyRequestForm	robot[3];
	ShrubberyCreationForm	shrubbery[3];
	PresidentialPardonForm	president[3];
	const std::string	message = "This won't work";

	// Stuff that we know it works
	robot[0] = RobotomyRequestForm("For robots");
	shrubbery[0] = ShrubberyCreationForm("stuff");
	president[0] = PresidentialPardonForm("Mr. Trump");
	b = Bureaucrat("That guy who works overtime", 3);
	for (std::size_t i = 1; i < 3; i++)
	{
		try
		{
			robot[i] = RobotomyRequestForm(message);
			shrubbery[i] = ShrubberyCreationForm(message);
			president[i] = PresidentialPardonForm(message);
		}
		catch (std::exception &e)
		{
			std::cerr << "Sorry, we cannot create the vars, because " << e.what() << " has happened\n";
		}
	}
	try
	{
		b.signForm(robot[0]);
		b.executeForm(robot[0]);
		b.signForm(shrubbery[0]);
		b.executeForm(shrubbery[0]);
		b.executeForm(president[0]);
		b.executeForm(president[0]);
	}
	catch (std::exception &e)
	{
		std::cerr << "Something... (*cough *cough, '" << e.what() << "') has happened\n";
	}
	return 0;
}
