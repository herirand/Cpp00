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

Contact::Contact(void)
{
	this->index = 0;
	return;
}

void	Contact::take_firstname(std::string str, int i)
{
	this->first_name = str;
	this->index = i % 8;
}

void	Contact::take_lastname(std::string str)
{
	this->last_name = str;
}

void	Contact::take_phonenumber(std::string str)
{
	this->phone_number = str;
}

void	Contact::take_darkestsecret(std::string str)
{
	this->darkest_secret = str;
}

void	Contact::take_contactindex(void)
{
	std::cout << this->first_name << std::endl;
}

void	Contact::take_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::print_contact( void ){
	std::cout << this->index << "	|	" << this->first_name << "		|	" << this->last_name << "		|	" << this->nickname<<std::endl;
}
