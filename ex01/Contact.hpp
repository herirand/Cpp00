/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:17:55 by herirand          #+#    #+#             */
/*   Updated: 2024/11/24 21:34:31 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
class Contact
{

	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string darkest_secret;
		//int			index;

	public:
		Contact( void );
		// ~Contact( void );

		int		i;

		void	take_firstname(std::string str){
			first_name = str;
		}
		void	take_lastname(std::string str){
			last_name = str;
		}
		void	take_phonenumber(std::string str){
			phone_number = str;
		}
		void	take_darkestsecret(std::string str){
			darkest_secret = str;
		}
		void	print_contact( void ){
			std::cout << "first_name	|	last_name	|	phone_number	|	darkest_secret" << std::endl;
			std::cout << first_name << "		|	"<< last_name << "		|	" << phone_number << "		|	" << darkest_secret <<std::endl;
			i = 0;
		}
};

#endif
