/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:51:49 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 12:08:36 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.h"

class AForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &ref);
		Inter &operator=(const Intern &ref);

		// methods
		AForm *makeForm(const std::string formName, const std::string formTarget);
};
