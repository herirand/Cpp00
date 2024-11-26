/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:55:52 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 20:28:39 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook{
	private:
		int	index;

	public:
		PhoneBook(void);
		Contact	contact[8];
		void	get_firstname(int i);
		void	get_latsname(int i);
		void	get_nickname(int i);
		void	get_phonenumber(int i);
		void	get_darkestsecret(int i);
		void	print_contact(void);
		void	search_contact(void);
		void	print_error(std::string name, std::string str);
		bool	my_isdigit(std::string str);
};

#endif
