/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:30:46 by medel-ca          #+#    #+#             */
/*   Updated: 2026/03/26 14:36:27 by medel-ca         ###   ########.fr       */
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
		int getTotal_contacts() const ;
		void add_contact(int index) ;
		int display_table() ;
		void display_contact(int index) ;
		PhoneBook() ;
		~PhoneBook() ;
} ;

#endif /* PHONE_BOOK_HPP */