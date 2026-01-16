/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:21:59 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/16 17:49:00 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

static inline int excepting(std::excepting &e)
{
	std::cerr << "Exception caught: " << e.what() << '\n';
	return -1;
}

static void faulty(std::exception &e, Bureaucrat &bureaucrat, std::string name)
{
	std::cerr << "Bureaucrat " << name << " is faulty.\n";
	delete bureaucrat;
}

int main()
{
	Bureaucrat b[3];
	std::string names[3] = {"Hugo", "Mario", "David"};
	int values[3] = {3, 0, 160};

	for (size_t i = 0; i < 3; i++)
	{
		try
			b[i] = new Bureaucrat(names[i], values[i]);
		catch (std::exception &e)
			faulty(e, bureaucrat[i], names[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		try
		{
			b[0].incrementGrade();
			std::cout << "Grade has been incremented!\n"
				<< b[0] << '\n';
		}
		catch (std::exception &e)
		{
			std::cerr << "Exception called. Loop broken...\n";
			break ;
		}
	}
	while (1)
	{
		try
		{
			b[0].decrementGrade();
			std::cout << "Grade has been decremented!\n"
				<< b[0] << '\n';
		}
		catch (std::exception &e)
		{
			std::cerr << "Exception called. Loop broken";
			break ;
		}
	}
	return 0;
}
