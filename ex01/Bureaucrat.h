/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:37:58 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 16:20:29 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "Form.h"

class Form;

class Bureaucrat
{
	private:
		std::string const	name;
		int			grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat &operator=(const Bureaucrat &ref);
		Bureaucrat(const Bureaucrat &ref);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &ref);

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &ref);
