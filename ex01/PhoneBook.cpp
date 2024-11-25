/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:00:40 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 11:24:08 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <ostream>

PhoneBook::PhoneBook()
{
	this->index = 0;
	while (index < 8)
	{
		this->contact[index] = Contact();
		index ++;
	}
}
	
void	PhoneBook::get_firstname( int i )
{
	std::string	firstname;

	std::cout << "FIRSTNAME : ";
	std::getline(std::cin, firstname);
	std::cout << std::endl;
	this->contact[i].take_firstname(firstname);
}

void	PhoneBook::get_latsname( int i )
{
	std::string	lastname;

	std::cout << "LASTNAME : ";
	std::getline(std::cin, lastname);
	std::cout << std::endl;
	this->contact[i].take_lastname(lastname);
}

void	PhoneBook::get_phonenumber( int i )
{
	std::string	phonenumber;

	std::cout << "PHONENUMBER : ";
	std::getline(std::cin, phonenumber);
	std::cout << std::endl;
	this->contact[i].take_phonenumber(phonenumber);
}

void	PhoneBook::get_darkestsecret( int i )
{
	std::string	secret;

	std::cout << "DARKESTSECRET : ";
	std::getline(std::cin, secret);
	std::cout << std::endl;
	this->contact[i].take_darkestsecret(secret);
}

void	PhoneBook::print_contact( void )
{
	int i;

	i = 0;
	std::cout << "first_name	|	last_name	|	phone_number	|	darkest_secret" << std::endl;
	while (i < 8)
	{
		// std::cout << "i == " << i << std::endl;
		this->contact[i].print_contact();
		i ++;
	}
}
