/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:17:55 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 20:01:10 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{

	private:
		std::string first_name;
		std::string last_name;
		std::string	nickname;
		std::string phone_number;
		std::string darkest_secret;
		int			index;

	public:
		Contact();

		// int			index;
		void	take_firstname(std::string stri, int index);
		void	take_lastname(std::string str);
		void	take_phonenumber(std::string str);
		void	take_darkestsecret(std::string str);
		void	take_nickname(std::string str);
		void	take_contactindex(void);
		void	print_contact( void );
};

#endif
