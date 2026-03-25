/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:30:46 by medel-ca          #+#    #+#             */
/*   Updated: 2026/03/25 18:56:55 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "utils.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int total_contacts;
	public:
		void setTotal_contacts() ;
		int getTotal_contacts() const { return total_contacts ; }
		void add_contact(int index);
		int display_table();
		void display_contact(int index);
		PhoneBook() : total_contacts(0) {}
		~PhoneBook(){};
} ;

#endif /* CONTACT_HPP */