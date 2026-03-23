#include <iostream>


class Contact
{
	public:
		Contact(std::string name, std::string last, std::string nickn, std::string nmbr, std::string drk_s) : first_name(name), last_name(last), nickname(nickn), phone_nbr(nmbr), drkst_s(drk_s){};
		void	show_contact_info(void);
		std::string	get_info() {return first_name + " " + last_name;};
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string drkst_s;
} ;

void	add_contact()
{
	std::string name;
	std::string last;
	std::string nmbr;
	std::string nickn;
	std::string drk_s;

	std::cout << "Name: ";
	std::cin >> name; 
	std::cout << "Last name: ";
	std::cin >> last;
	std::cout << "Nickname: ";
	std::cin >> nickn;
	std::cout << "Number: ";
	std::cin >> nmbr;
	std::cout << "Darkest secret: ";
	std::cin >> drk_s;
	Contact c = Contact(name, last, nickn, nmbr, drk_s);
	std::string full_info = c.get_info();

	std::cout << "New contact was created: " << full_info << "\n";
}

int main()
{
	std::string order;
	while(1)
	{
		std::cout << "What do you want to do?\nYou can ADD a contact, SEARCH for a contact or EXIT the phonebook\n";
		std::cin >> order;
		if(order == "ADD")
			add_contact();
		else if(order == "SEARCH")
			std::cout << "Searching...\n";
		else if (order == "EXIT")
			break;
		else
			std::cout << "Only available commands are: ADD, SEARCH and EXIT\n";
	}
	return 0;
}