/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:56:30 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/05 18:09:41 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bueraucrat.h"

//CDO
Bureaucrat::Bureaucrat() { std::cout << "Base constructor called\n"; }
Bureaucrat::~Bureaucrat() { std::cout << "Base destructor called\n"; }
Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	std::cout << "Copy constructor called.\n";
	*this = ref;
}
Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	std::cout << "Complex constructor called\n";
	this.name = name;
	this.grade = grade;
}

const std::string Bureaucrat::getName() { return name; }
const int Bureaucrat::getGrade() { return grade; }
