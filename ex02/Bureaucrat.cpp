/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:56:30 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 14:37:28 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

//CDO
Bureaucrat::Bureaucrat() : name("Default"), grade(150) { std::cout << "Base constructor called\n"; }
Bureaucrat::~Bureaucrat() { std::cout << "Base destructor called\n"; }
Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	std::cout << "Copy constructor called.\n";
	*this = ref;
}
Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	std::cout << "Complex constructor called\n";
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
	std::cout << "Copy operator called\n";
	if (this != &ref)
		grade = ref.grade;
	return *this;
}

//Methods
std::string Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(AForm &ref)
{
	try
	{
		ref.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cerr << name << " couldn't sign " << ref.getName() << " because " << e.what() << '\n';
		return ;
	}
	std::cout << name << " signed " << ref.getName() << '\n';
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << '\n';
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << " happpened\n";
		throw std::logic_error("something had happened you moron, because it is very likely that this type is not quite right!");
	}
}

//Exceptions
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "Grade is too low!"; }
const char *Bureaucrat::GradeTooHighException::what() const throw() { return "Grade is too high!"; }

//operator ostream
std::ostream &operator<<(std::ostream &out, const Bureaucrat &ref)
{
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade() << '\n';
	return out;
}
