/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:09:01 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 17:17:02 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.h"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);
		ShrubberyCreationForm(const std::string &target);

		// Methods
		virtual void	performAction() const;
		std::string	getTarget() const;

		// Exceptions
		class opf : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
