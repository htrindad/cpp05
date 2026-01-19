/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:21:59 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/19 16:02:58 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

int main()
{
	Form		forming;
	Bureaucrat	bureaucrating;

	try
	{
		bureaucrating = Bureaucrat("Huguinho", 5);
		forming = Form("Hugo", 5, 3);
		forming.beSigned(bureaucrating);
		std::cout << "\n\n" << bureaucrating << forming << "\n\n";
	}
	catch (std::exception &e)
	{
		std::cerr << "Well shi*... " << e.what() << " happened\n";
	}
	return 0;
}
