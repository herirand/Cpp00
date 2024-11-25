/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:07:22 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 11:18:50 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main( void )
{
	// Contact instance;
	PhoneBook instance;
	std::string buff;
	int	i = 0; 
	
	while (true)
	{
		std::getline(std::cin, buff);
		if (buff == "ADD")
		{
			instance.get_firstname(i);
			instance.get_latsname(i);
			instance.get_phonenumber(i);
			instance.get_darkestsecret(i);
			i ++;
			// instance.contact->i++ ;
			
		}
		else if (buff == "SEARCH")
		{
			std::cout << "in search" << std::endl;
			instance.print_contact();
		}
		// if (instance.contact->i == 1)
		// 	instance.contact->print_contact();
		if (buff == "EXIT")
		{
			break;
		}
	}
	return (0);
}
