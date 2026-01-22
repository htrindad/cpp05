/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:53:36 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 12:01:50 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

// CDO
Intern::Intern() { std::cout << "Standard constructor called\n"; }
Intern::~Intern() { std::cout << "Standard destructor called\n"; }
Intern::Intern(const Intern &ref)
{
	(void)ref;
	std::cout << "Copy constructor called\n";
}
Intern &Intern::operator=(const Intern &ref)
{
	(void)ref;
	return *this;
}

// Methods
AForm *Intern::makeForm(const std::string formName, const std::string formTarget)
{
	std::size_t i = 0;
	std::string af[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while (i < 3 && formName != af[i])
		i++;
	if (i < 3)
		std::cout << "Intern creates " << formName << '\n';
	switch (i)
	{
		case 0:
			return new ShrubberyCreationForm(formTarget);
		case 1:
			return new RobotomyRequestForm(formTarget);
		case 2:
			return new PresidentialPardonForm(formTarget);
		default:
			std::cerr << "Form does not exists\n";
			return NULL;
	}
}
