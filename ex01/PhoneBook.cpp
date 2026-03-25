#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

void PhoneBook::setTotal_contacts()
{ 
	if (total_contacts < 8)
		total_contacts++;
}
void PhoneBook::add_contact(int index)
{
	std::string input;
	contact[index].setFirstName(read_nonempty_input("Name: "));
	contact[index].setLastName(read_nonempty_input("Last Name: "));
	contact[index].setPhone_nbr(read_number_input("Phone number: "));
	contact[index].setNickname(read_nonempty_input("Nickname: "));
	contact[index].setDrkst_s(read_nonempty_input("Tell me your darkest secret: "));
	std::cout << "\033[32mNew contact was created!\033[0m\n";
	PhoneBook::setTotal_contacts();
}
int PhoneBook::display_table()
{
	if(PhoneBook::getTotal_contacts() == 0)
		return 0;
	for (int i = 0; i <  getTotal_contacts(); i++) {
		std::cout << "\033[32mThis are all your contacts\033[0m\n";
		std::cout << std::setw(10) << i + 1 << " | ";
	std::cout << std::setw(10) << format(contact[i].getFirstName()) << " | ";
	std::cout << std::setw(10) << format(contact[i].getLastName()) << " | ";
	std::cout << std::setw(10) << format(contact[i].getNickname()) << "\n";
	}
	return 1;
}
void	PhoneBook::display_contact(int index)
{
	std::cout << "First Name: " << contact[index].getFirstName() << "\n";
	std::cout << "Last Name: " << contact[index].getLastName() << "\n";
	std::cout << "Nickname: " << contact[index].getNickname() << "\n";
	std::cout << "Phone number: " << contact[index].getPhone_nbr() << "\n";
	std::cout << "Darkest secret: " << contact[index].getDrkst_s() << "\n";
}