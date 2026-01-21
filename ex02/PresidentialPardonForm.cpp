/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:02:03 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/21 14:22:49 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

// CDO
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) { std::cout << "Default constructor called\n"; }
PresidentialPardonForm::~PresidentialPardonForm() { std::cout << "Default destructor called\n"; }
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : AForm(ref), target(ref.target)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialForm &ref)
{
	std::cout << "Copy operator overload called\n";
	target = ref.target;
	setSig(ref.getSig());
	return *this;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target(target) { std::cout << "Target constructor called\n"; }

// Methods
void PresidentialPardonForm::performAction() const { std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n" }
std::string PresidentialPardonForm::getTarget() const { return target; }
void PresidentialPardonForm::setTarget(const std::string &target) { this->target = target; }
