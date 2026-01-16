/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:36:11 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/16 18:50:14 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

class Form
{
	private:
		const std::string	name;
		bool			sig = false;
		const int		init_grade;
		const int		exec_grade;
	public:
		Form();
		~Form();
		Form(const Form &ref);
		Form &operator=(const Form &ref);
		Form(const std::string name, const int init_grade, const int exec_grade);
		void beSigned(const Bureaucrat &b);

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
