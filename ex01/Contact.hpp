#ifndef CONTACT_HPP
#define CONTACT_HPP
#endif

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		bool	set_info(std::string contact_info);
		void	show_contact_info(void);
		std::string	get_info(std::string contact_info);
		bool	check_contact(void);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int phone_nbr;
		std::string drkst_s;
} ;