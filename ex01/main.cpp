/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:07:22 by herirand          #+#    #+#             */
/*   Updated: 2024/11/24 21:40:02 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main( void )
{
	Contact instance;
	std::string buff;
	std::string firstname;
	std::string lastname;
	std::string phonenumber;
	std::string darkestsecret;
	
	while (true)
	{
		std::getline(std::cin, buff);
		if (buff == "ADD")
		{
			std::cout << "FIRSTNAME : ";
			std::getline(std::cin, firstname);
			std::cout << std::endl;
			instance.take_firstname(firstname);
			
			std::cout << "LASTNAME : ";
			std::getline(std::cin, lastname);
			std::cout << std::endl;
			instance.take_lastname(lastname);
			
			std::cout << "PHONENUMBER : ";
			std::getline(std::cin, phonenumber);
			std::cout << std::endl;
			instance.take_phonenumber(phonenumber);
			
			std::cout << "DARKESTSECRET : ";
			std::getline(std::cin, darkestsecret);
			std::cout << std::endl;
			instance.take_darkestsecret(darkestsecret);
			instance.i = 1;
			
		}
		else if (buff == "SEARCH")
		{
			std::cout << "in search" << std::endl;
		}
		if (instance.i == 1)
			instance.print_contact();
		if (buff == "EXIT")
		{
			break;
		}
	}
	return (0);
}
