/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:07 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 16:58:17 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"

// CDO
AForm::AForm() : name("Default"), sig(false), init_grade(150), exec_grade(150) { std::cout << "Default constructor called\n"; }
AForm::~AForm() { std::cout << "Default destructor called\n"; }
AForm::AForm(const std::string name, const int init_grade, const int exec_grade) : name(name), sig(false), init_grade(init_grade), exec_grade(exec_grade)
{
	std::cout << "Constructor called\n";
	if (init_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (init_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}
AForm::AForm(const AForm &ref) : name(ref.name), sig(ref.sig), init_grade(ref.init_grade), exec_grade(ref.exec_grade)
{
	std::cout << "Copy constructor called\n";
}
AForm &AForm::operator=(const AForm &ref)
{
	std::cout << "Copy constructor called\n";
	sig = ref.sig;
	return *this;
}

// Exceptions
const char *AForm::GradeTooLowException::what() const throw() { return "Grade too low!"; }
const char *AForm::GradeTooHighException::what() const throw() { return "Grade too high!"; }
