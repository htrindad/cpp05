/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:58:43 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 19:05:01 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

// CDO
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) { std::cout << "Default constructor called\n"; }
RobotomyRequestForm::~RobotomyRequestForm() { std::cout << "Default destructor called\n"; }
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : AForm(ref) { std::cout << "Copy constructor called\n"; }
RobotomyRequestForm::RobotmyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "Target constructor called\n";
	*this = ref;
}
RobotomyRequestForm &RobotomyRequestForm::operator(const RobotomyRequestForm &ref)
{
	target = ref.target;
	setSig(ref.getSig());
	return *this;
}

// Methods
void RobotomyRequestForm::performAction() const
{}
