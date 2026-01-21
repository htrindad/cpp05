/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:02:03 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/21 14:06:07 by htrindad         ###   ########.fr       */
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
}
