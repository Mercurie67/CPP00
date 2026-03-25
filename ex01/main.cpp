#include "PhoneBook.hpp"
#include <cstdlib>

void search_contact(PhoneBook& phonebook);

int main()
{
	std::string order;
	PhoneBook phonebook;
	
	int index = 0;
	while(1)
	{
		std::cout << "What do you want to do?\nYou can ADD a contact, SEARCH for a contact or EXIT the phonebook\n";
		std::getline(std::cin, order);
		if(order == "ADD")
		{
			phonebook.add_contact(index);
			if(index == 7)
				index = 0;
			else
				index++;
		}
		else if(order == "SEARCH")
		{
			search_contact(phonebook);
		}
		else if (order == "EXIT")
			break;
		else
			std::cout << "\033[31mOnly available commands are: ADD, SEARCH and EXIT\033[0m\n";
	}
	return 0;
} 

void search_contact(PhoneBook& phonebook)
{
	std::string contact;

	if(phonebook.display_table())
	{
		int idx = -1;
    	do	{
       		std::cout << "What contact are you searching for? (1 to " << phonebook.getTotal_contacts() << "): ";
        	std::getline(std::cin, contact);
        	if (is_number(contact)) 
        		idx = std::atoi(contact.c_str()) - 1;
			else
				std::cout << "\033[31mError: Invalid index. Please enter a value between 1 and " << phonebook.getTotal_contacts() << "\033[0m\n";
    	} while(idx < 0 || idx >= phonebook.getTotal_contacts());
    	phonebook.display_contact(idx);
	}
	else
		std::cout << "\033[31mYou don't have any contact yet.\033[0m\n";
}
