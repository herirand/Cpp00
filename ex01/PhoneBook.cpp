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
#include <cctype>
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook()
{
	this->index = 0;
	while (index < 8)
	{
		this->contact[index] = Contact();
		index ++;
	}
}
	
void	PhoneBook::get_firstname(int i)
{
	std::string	firstname;

	std::cout << "FIRSTNAME : ";
	std::getline(std::cin, firstname);
	if (firstname.empty())
	{
		PhoneBook::print_error("Firstname", " invalid");
		PhoneBook::get_firstname(i);
	}
	else
		this->contact[i % 8].take_firstname(firstname, i);
}

void	PhoneBook::get_latsname(int i)
{
	std::string	lastname;

	std::cout << "LASTNAME : ";
	std::getline(std::cin, lastname);
	if (lastname.empty())
	{
		PhoneBook::print_error("Lastname", " invalid");
		PhoneBook::get_latsname(i);
	}
	else
		this->contact[i % 8].take_lastname(lastname);
}

void	PhoneBook::get_nickname(int i)
{
	std::string	nickname;

	std::cout << "NICKNAME : ";
	std::getline(std::cin, nickname);
	if (nickname.empty())
	{
		PhoneBook::print_error("Nickname", " invalid");
		PhoneBook::get_nickname(i);
	}
	else
		this->contact[i % 8].take_nickname(nickname);
}

void	PhoneBook::get_phonenumber(int i)
{
	std::string	phonenumber;

	std::cout << "PHONENUMBER : ";
	std::getline(std::cin, phonenumber);
	if (phonenumber.empty() || !my_isdigit(phonenumber))
	{
		PhoneBook::print_error("Phonenumber", " invalid");
		PhoneBook::get_phonenumber(i);
	}
	else
		this->contact[i % 8].take_phonenumber(phonenumber);
}

void	PhoneBook::get_darkestsecret(int i)
{
	std::string	secret;

	std::cout << "DARKESTSECRET : ";
	std::getline(std::cin, secret);
	if (secret.empty())
	{
		PhoneBook::print_error("Darkestsecret", " invalid");
		PhoneBook::get_darkestsecret(i);
	}
	else
		this->contact[i % 8].take_darkestsecret(secret);
}

void	PhoneBook::print_contact(void)
{
	int i;

	i = 0;
	std::cout << std::setw(10)  << "index" << "|" << std::setw(10)  << "firstname" << "|"
		<< std::setw(10)<< "lastname" << "|" << std::setw(10)<< "nickname" << "|" <<std::endl;
	while (i < 8)
	{
		this->contact[i  % 8].print_contact();
		i ++;
	}
}

bool	PhoneBook::my_isdigit(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return false;
		i ++;
	}
	return true;
}

void	PhoneBook::print_error(std::string name, std::string str)
{
	if (!name.empty())
		std::cout << name;
	if (!str.empty())
		std::cout << str << std::endl; 
}

void	PhoneBook::search_contact(void)
{
	int	indx;
	std::string str;
	
	indx = -1;
	std::cout << "*SEARCH*" << "\n" << "index : ";
	std::getline(std::cin, str);
	indx = str[0] - 48;
	if (indx < 0 || indx > 8)
	{
		std::cout << "contact non trouver " << std::endl;
		return;
	}
	std::cout << std::setw(10)  << "index" << "|" << std::setw(10)  << "firstname" << "|"
		<< std::setw(10)<< "lastname" << "|" << std::setw(10)<< "nickname" << "|" <<std::endl;
	this->contact[indx].print_contact();
}
