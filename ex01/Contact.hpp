/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:30:38 by medel-ca          #+#    #+#             */
/*   Updated: 2026/03/26 14:36:16 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string drkst_s;
	public:
		Contact(){};	
		~Contact(){};
		std::string getFirstName() const ;
		std::string getLastName() const ;
		std::string getNickname() const ;
		std::string getPhone_nbr() const ;
		std::string getDrkst_s() const ;
		void setFirstName(std::string first_name) ;
		void setLastName(std::string last_name) ;
		void setNickname(std::string nickname) ;
		void setPhone_nbr(std::string phone_nbr) ;
		void setDrkst_s(std::string drkst_s) ;
} ;
#endif /* CONTACT_HPP */