/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:58:21 by htrindad          #+#    #+#             */
/*   Updated: 2026/01/21 14:23:30 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonFomr(const PresidentialPardonForm &ref);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &ref);

		// Methods
		virtual void performAction() const;
		std::string getTarget() const;
		void setTarget(const std::string &target);
};
