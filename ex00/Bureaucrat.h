/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:37:58 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/05 18:05:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctypes>
#include <exception>

class Bureaucrat : public std::exception
{
	private:
		std::string const	name;
		int			grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat &operator=(const Bureaucrat &ref);
		const std::string getName();
		const int getGrade();
};
