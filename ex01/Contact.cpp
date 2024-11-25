/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:04:28 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 11:21:39 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	// static int i = 0;
	//
	// this->i = i;
	// i++;
	return;
}

void	Contact::take_firstname(std::string str){
	this->first_name = str;
}

void	Contact::take_lastname(std::string str){
	this->last_name = str;
}

void	Contact::take_phonenumber(std::string str){
	this->phone_number = str;
}

void	Contact::take_darkestsecret(std::string str){
	this->darkest_secret = str;
}

void	Contact::print_contact( void ){
	// while (Contact::i < 8)
	// {
	std::cout << this->first_name << "		|	"<< this->last_name << "		|	" << this->phone_number << "		|	" << this->darkest_secret <<std::endl;
		// i++;
	// }
}
