/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:36:11 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 16:19:23 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool			sig;
		const int		init_grade;
		const int		exec_grade;
	public:
		Form();
		~Form();
		Form(const Form &ref);
		Form &operator=(const Form &ref);
		Form(const std::string name, const int init_grade, const int exec_grade);
		void beSigned(const Bureaucrat &b);
		std::string getName() const;
		bool getSig() const;
		int getInit() const;
		int getExec() const;

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

std::ostream &operator<<(std::ostream &out, Form const &ref);
