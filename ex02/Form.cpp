/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:45:05 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 18:38:37 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

//CDO
Form::Form() : name("Default"), sig(false), init_grade(150), exec_grade(150) { std::cout << "Default constructor called\n"; }
Form::~Form() { std::cout << "Default destructor called\n"; }
Form::Form(const Form &ref) : name(ref.name), sig(ref.sig), init_grade(ref.init_grade), exec_grade(ref.exec_grade) { std::cout << "Copy constructor called\n"; }
Form &Form::operator=(const Form &ref)
{
	std::cout << "Copy operator overload called\n";
	sig = ref.sig;
	return *this;
}
Form::Form(std::string const name, const int init_grade, const int exec_grade) : name(name), sig(false), init_grade(init_grade), exec_grade(exec_grade)
{
	std::cout << "Constructor called\n";
	if (init_grade > 150)
		throw GradeTooLowException();
	if (init_grade < 1)
		throw GradeTooHighException();
}

//Methods
void Form::beSigned(const Bureaucrat &ref)
{
	if (ref.getGrade() <= init_grade)
		sig = true;
	else
		throw GradeTooLowException();
}

std::string Form::getName() const { return name; }
bool Form::getSig() const { return sig; }
int Form::getInit() const { return init_grade; }
int Form::getExec() const { return exec_grade; }

//Exceptions
const char *Form::GradeTooLowException::what() const throw() { return "Grade is too low!"; }
const char *Form::GradeTooHighException::what() const throw() { return "Grade is too high!"; }

//operator ostream
std::ostream &operator<<(std::ostream &out, const Form &ref)
{
	out << ref.getName() << " Form, initial grade " << ref.getInit() << ". Execution grade " << ref.getExec() << '\n';
	return out;
}
