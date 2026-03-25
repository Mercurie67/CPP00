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
		Contact(std::string name, std::string last, std::string nickn, std::string nmbr, std::string drk_s)
		: first_name(name), last_name(last), nickname(nickn), phone_nbr(nmbr), drkst_s(drk_s){};
		~Contact(){};
		std::string getFirstName() const { return first_name ;}
		std::string getLastName() const { return last_name ;}
		std::string getNickname() const { return nickname ;}
		std::string getPhone_nbr() const { return phone_nbr ;}
		std::string getDrkst_s() const { return drkst_s ;}
		void setFirstName(std::string first_name) { this->first_name = first_name ;}
		void setLastName(std::string last_name) { this->last_name = last_name ;}
		void setNickname(std::string nickname) { this->nickname = nickname ;}
		void setPhone_nbr(std::string phone_nbr) { this->phone_nbr = phone_nbr ;}
		void setDrkst_s(std::string drkst_s) { this->drkst_s = drkst_s ;}
} ;
#endif