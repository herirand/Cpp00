/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:17:55 by herirand          #+#    #+#             */
/*   Updated: 2024/11/19 15:14:03 by herirand         ###   ########.fr       */
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

	public:
		Contact( void );
		~Contact( void );

		void	take_firstname(std::string name){
			first_name = name;
		}
		void	print_contact(){
			std::cout << "first_name : " << first_name << std::endl;
		}
};

#endif
