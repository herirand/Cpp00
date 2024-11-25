/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:17:55 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 11:21:07 by herirand         ###   ########.fr       */
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

		// int		i;

		void	take_firstname(std::string str);
		void	take_lastname(std::string str);
		void	take_phonenumber(std::string str);
		void	take_darkestsecret(std::string str);
		void	print_contact( void );
};

#endif
