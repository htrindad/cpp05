/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:30:35 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 18:54:13 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

// CDO
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) { std::cout << "Default constructor called\n"; }
ShrubberyCreationForm::~ShrubberyCreationForm() { std::cout << "Default destructor called\n"; }
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "Target constructor called\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : AForm(ref) { *this = ref; }
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	target = ref.target;
	setSig(ref.getSig());
	return *this;
}

// Methods
void ShrubberyCreationForm::performAction() const
{
	std::ofstream out(target + "_shrubbery");

	if (out)
	{
		out
			<< "    /\\    \n"
			<< "   /  \\   \n"
			<< "  /    \\  \n"
			<< " /      \\ \n"
			<< "/________\\\n"
			<< "    ||    \n"
			<< "    ||    \n"
			<< "    ||    \n";
		out.close();
	}
	else
		throw opf();
}

// Exceptions
char const *ShrubberyCreationForm::opf::what() const throw() { return "Could not open nor write the file!"; }
