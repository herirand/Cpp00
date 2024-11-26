/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:04:28 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 21:03:23 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <string>

Contact::Contact(void)
{
	this->index = 0;
	return;
}

void	Contact::take_firstname(std::string str, int i)
{
	if (str.length() > 10)
	{
		this->first_name = str.substr(0, 9);
		this->first_name += '.';
	}
	else
		this->first_name = str;
	this->index = i % 8;
}

void	Contact::take_lastname(std::string str)
{
	if (str.length() > 10)
	{
		this->last_name = str.substr(0, 9);
		this->last_name += '.';
	}
	else
		this->last_name = str;
}

void	Contact::take_phonenumber(std::string str)
{
	if (str.length() > 10)
	{
		this->phone_number = str.substr(0, 9);
		this->phone_number += '.';
	}
	else
		this->phone_number = str;
}

void	Contact::take_darkestsecret(std::string str)
{
	if (str.length() > 10)
	{
		this->darkest_secret = str.substr(0, 9);
		this->darkest_secret += '.';
	}
	else
		this->darkest_secret = str;
}

void	Contact::take_nickname(std::string str)
{
	if (str.length() > 10)
	{
		this->nickname = str.substr(0, 9);
		this->nickname += '.';
	}
	else
		this->nickname = str;
}

void	Contact::take_contactindex(void)
{
	std::cout << this->first_name << std::endl;
}

void	Contact::print_contact( void )
{
	std::cout << std::setw(10)  << this->index << "|" << std::setw(10)  << this->first_name << "|"
		<< std::setw(10)<< this->last_name  << "|" << std::setw(10)<< this->nickname << "|" <<std::endl;
}
