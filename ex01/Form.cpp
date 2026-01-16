/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:45:05 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/16 18:52:30 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

//CDO
Form::Form() : name("Default"), init_grade(150), exec_grade(150) { std::cout << "Default constructor called\n"; }
Form::~Form() { std::cout << "Default destructor called\n"; }
Form::Form(const Form &ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}
Form &Form::operator=(const Form &ref)
{
	std::cout << "Copy operator overload called\n";
	*this = ref;
	return *this;
}
Form::Form(std::string const name, const int init_grade, const int exec_grade) : name(name), init_grade(init_grade), exec_grade(exec_grade)
{
	std::cout << "Constructor called\n";
}

//Methods
void beSigned(const Bureaucrat &ref)
{

}
