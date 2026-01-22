/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:58:43 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 11:34:42 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

// CDO
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) { std::cout << "Default constructor called\n"; }
RobotomyRequestForm::~RobotomyRequestForm() { std::cout << "Default destructor called\n"; }
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : AForm(ref) { std::cout << "Copy constructor called\n"; }
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target) { std::cout << "Target constructor called\n"; }
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	std::cout << "Copy operator overload called\n";
	target = ref.target;
	setSig(ref.getSig());
	return *this;
}

// Methods
void RobotomyRequestForm::performAction() const
{
	bool rn = std::rand() % 2;

	if (rn)
		std::cout << target << " has been robotomized successfully!\n";
	else
		throw rf();
}

std::string RobotomyRequestForm::getTarget() const { return target; }
void RobotomyRequestForm::setTarget(const std::string &target) { this->target = target; }

// Methods
const char *RobotomyRequestForm::rf::what() const throw() { return "Unfortunately, the robotomy had failed...\n"; }
