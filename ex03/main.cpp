/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:21:59 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 12:13:55 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main()
{
	RobotomyRequestForm	*robot;
	ShrubberyCreationForm	*shrubbery;
	PresidentialPardonForm	*president;
	AForm			*nip;
	Intern			intern;

	try
	{
		robot = (RobotomyRequestForm *)intern.makeForm("RobotomyRequestForm", "robotnik");
		shrubbery = (ShrubberyCreationForm *)intern.makeForm("InternCreationForm", "tomfooelry");
		president = (PresidentialPardonForm *)intern.makeForm("PresidentialPardonForm", "Mr. Trump"); // I had absolutely no idea I had to type cast in C++
		nip = intern.makeForm("Nothing in particular", NULL);
	}
	catch (std::exception &e)
	{
		std::cerr << "Oh no... " << e.what() << " happened\n";
	}
	if (robot)
		delete robot;
	if (shrubbery)
		delete shrubbery;
	if (president)
		delete president;
	return 0;
}
