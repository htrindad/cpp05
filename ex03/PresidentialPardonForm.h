/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:58:21 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 12:08:56 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.h"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &ref);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &ref);

		// Methods
		virtual void performAction() const;
		std::string getTarget() const;
		void setTarget(const std::string &target);
};
