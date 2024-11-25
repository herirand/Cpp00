/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:00:40 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 21:11:32 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

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
	this->contact[i % 8].take_firstname(firstname, i);
	// this->contact[i].index = i;
}

void	PhoneBook::get_latsname( int i )
{
	std::string	lastname;

	std::cout << "LASTNAME : ";
	std::getline(std::cin, lastname);
	std::cout << std::endl;
	this->contact[i % 8].take_lastname(lastname);
}

void	PhoneBook::get_nickname(int i)
{
	std::string	nickname;

	std::cout << "NICKNAME : ";
	std::getline(std::cin, nickname);
	std::cout << std::endl;
	this->contact[i % 8].take_nickname(nickname);
}

void	PhoneBook::get_phonenumber( int i )
{
	std::string	phonenumber;

	std::cout << "PHONENUMBER : ";
	std::getline(std::cin, phonenumber);
	std::cout << std::endl;
	this->contact[i % 8].take_phonenumber(phonenumber);
}

void	PhoneBook::get_darkestsecret( int i )
{
	std::string	secret;

	std::cout << "DARKESTSECRET : ";
	std::getline(std::cin, secret);
	std::cout << std::endl;
	this->contact[i % 8].take_darkestsecret(secret);
}

void	PhoneBook::print_contact( void )
{
	int i;

	i = 0;
	std::cout << "index	|	first_name	|	last_name	|	nickname" << std::endl;
	while (i < 8)
	{
		this->contact[i  % 8].print_contact();
		i ++;
	}
}

void	PhoneBook::search_contact(void)
{
	int	indx;
	std::string str;
	
	indx = 0;
	std::cout << "index : ";
	std::getline(std::cin, str);
	std::stringstream ss(str);
	ss >> indx;
	// std::cout << " str == " << str << std::endl;
	// std::cout << "indx == " << indx << std::endl;
	if (indx < 0 || indx > 8)
	{
		std::cout << "contact non trouver " << std::endl;
		return;
	}
	std::cout << "index	|	first_name	|	last_name	|	nickname" << std::endl;
	this->contact[indx].print_contact();
	// this->contact[indx].take_contactindex();
}
