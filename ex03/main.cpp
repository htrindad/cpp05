/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:21:59 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 12:07:48 by htrindad         ###   ########.fr       */
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
		robot = intern.makeForm("RobotomyRequestForm", "robotnik");
		shrubbery = intern.makeForm("InternCreationForm", "tomfooelry");
		president = intern.makeForm("PresidentialPardonForm", "Mr. Trump");
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
	if (nip)
		delete nip;
	return 0;
}
