/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:55:00 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/21 13:57:03 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.h"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
		RobotomyRequestForm(const std::string &target);

		// Methods
		virtual void performAction() const;
		std::string getTarget() const;
		void setTarget(const std::string &target);

		// Exceptions
		class rf : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
