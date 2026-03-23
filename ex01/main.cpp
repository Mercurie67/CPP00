#include <iostream>
#include <iomanip>
#include <cstdlib>


class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string drkst_s;
	public:
		Contact(std::string name, std::string last, std::string nickn, std::string nmbr, std::string drk_s) : first_name(name), last_name(last), nickname(nickn), phone_nbr(nmbr), drkst_s(drk_s){};
	
} ;

std::string	set_info(std::string type)
{
	std::cout << type ;
	std::string ret;
	std::cin >> ret;
	return ret;
}

class PhoneBook
{
	Contact contact[8];
	public:
		void add_contact(int index) {
			std::string name;
			std::string last;
			std::string nmbr;
			std::string nickn;
			std::string drk_s;

			name = set_info("Name: ");
			last = set_info("Last name: ");
			nmbr = set_info("Phone number: ");
			nickn = set_info("Nickname: ");
			drk_s = set_info("Tell me your dark secret...: ");
			contact[index] = Contact(name, last, nickn, nmbr, drk_s);
			std::cout << "New contact was created:\n";
		}
		void	show_contact_info(int index){
			std::cout << std::setw(10) << index << " | ";
			std::cout << std::setw(10) << contact[index].first_name << " | ";
			std::cout << std::setw(10) << contact[index].last_name << " | ";
			std::cout << std::setw(10) << contact[index].nickname << "\n";
		}

} ;


int main()
{
	std::string order;
	PhoneBook phoneb;
	int index = 1;
	std::string user;

	while(1)
	{
		std::cout << "What do you want to do?\nYou can ADD a contact, SEARCH for a contact or EXIT the phonebook\n";
		std::cin >> order;
		if(order == "ADD")
		{
			phoneb.add_contact(index);
			if(index == 8)
				index = 0;
			index++;
		}
		else if(order == "SEARCH")
		{
			std::cout << "What user are you searching for? (1 to 8): ";
			phoneb.show_contact_info(atoi(std::cin >> user));
		}
		else if (order == "EXIT")
			break;
		else
			std::cout << "Only available commands are: ADD, SEARCH and EXIT\n";
	}
	return 0;
}