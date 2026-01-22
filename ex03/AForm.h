/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:36:52 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/22 12:17:06 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.h"
#include <cstdlib>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool			sig;
		int			init_grade;
		int			exec_grade;
		virtual void		performAction() const = 0;
	public:
		AForm();
		virtual ~AForm();
		AForm(const AForm &ref);
		AForm &operator=(const AForm &ref);
		AForm(const std::string name, const int init_grade, const int exec_grade);

		// member functions
		void beSigned(const Bureaucrat &ref);
		std::string getName() const;
		bool getSig() const;
		int getInit() const;
		int getExec() const;
		void setSig(bool sig);
		void execute(const Bureaucrat &executor) const;

		// exceptions
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
		class ns : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
