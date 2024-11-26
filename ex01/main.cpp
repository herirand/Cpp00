/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:07:22 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 21:05:13 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main( void )
{
	PhoneBook instance;
	std::string buff;
	int	i = 0; 
	
	while (true)
	{
		std::cout << "*ADD* to add contact  or *SEARCH* to search contact or *EXIT* to finish" << std::endl;
		std::getline(std::cin, buff);
		if (buff == "ADD")
		{
			std::cout << "*ADD*" << std::endl;
			instance.get_firstname(i);
			instance.get_latsname(i);
			instance.get_nickname(i);
			instance.get_phonenumber(i);
			instance.get_darkestsecret(i);
			i ++;
			
		}
		else if (buff == "SEARCH")
		{
			instance.print_contact();
			instance.search_contact();
		}
		else if (buff == "EXIT")
			break;
		else
			std::cout << "Input invalid" << std::endl;
	}
	return (0);
}
