/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:55:52 by herirand          #+#    #+#             */
/*   Updated: 2024/11/25 11:19:45 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		int	index;

	public:
		PhoneBook(void);
		Contact	contact[8];
		void get_firstname(int i);
		void get_latsname(int i);
		void get_phonenumber(int i);
		void get_darkestsecret(int i);
		void	print_contact(void);
};

#endif // !PHON
