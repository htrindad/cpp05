/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:21:59 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/16 18:34:38 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main()
{
	Bureaucrat b[3];
	std::string names[3] = {"Hugo", "Mario", "David"};
	int values[3] = {3, 0, 160};

	for (size_t i = 0; i < 3; i++)
	{
		try
		{
			b[i] = Bureaucrat(names[i], values[i]);
		}
		catch (std::exception &e)
		{
			std::cerr << "Bureaucrat " << names[i] << " is faulty, due to " << e.what() << '\n';
		}
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
