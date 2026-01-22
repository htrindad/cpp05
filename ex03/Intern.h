/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:51:49 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 12:11:35 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

class AForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &ref);
		Intern &operator=(const Intern &ref);

		// methods
		AForm *makeForm(const std::string formName, const std::string formTarget);
};
