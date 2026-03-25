#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>


class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string drkst_s;
	public:
		Contact(){};
		Contact(std::string name, std::string last, std::string nickn, std::string nmbr, std::string drk_s) : first_name(name), last_name(last), nickname(nickn), phone_nbr(nmbr), drkst_s(drk_s){};
		~Contact(){};
} ;

std::string	set_info(std::string type) {
	std::cout << type ;
	std::string ret;
	std::getline(std::cin, ret);
	return ret;
}

class PhoneBook {
	
	
		Contact contact[8];
		std::string name;
		std::string last;
		std::string nmbr;
		std::string nickn;
		std::string drk_s;
		int total_contacts = 0;
	public:	
		void add_contact(int index) {
			
			name = set_info("Name: ");
			last = set_info("Last name: ");
			nmbr = set_info("Phone number: ");
			nickn = set_info("Nickname: ");
			drk_s = set_info("Tell me your dark secret...: ");			
			contact[index] = Contact(name, last, nickn, nmbr, drk_s);
			std::cout << "New contact was created:\n";
			total_contacts++;
		}
		void	show_contact_info(int index)  {
			if(index < 0 || index > total_contacts)
				std::cout << "You don't have a contact with that index. Try again.\n";
			std::cout << std::setw(10) << index << " | ";
			std::cout << std::setw(10) << name << " | ";
			std::cout << std::setw(10) << last << " | ";
			std::cout << std::setw(10) << nickn << "\n";
		}
		PhoneBook(){};
		~PhoneBook(){};
} ;


int main()
{
	std::string order;
	PhoneBook phoneb;
	int index = 1;
	char user[1] = "";

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
			std::cin >> user; 
			phoneb.show_contact_info(atoi(user));
		}
		else if (order == "EXIT")
			break;
		else
			std::cout << "Only available commands are: ADD, SEARCH and EXIT\n";
	}
	return 0;
} 
/*
class Contact {
	private:
		variables que pide el ejercicio: nombre, apellido, nick, número, secreto;
	public:
		constructor con las inicializadas
		~destructor
		setVariable(){}
		getVariable(){}
}

class PhoneBook{
	private:
		Contact contacts[8];
		int next_index;
		int total_contacts;
	public:
		add_contact(index){} -> función que pide al usuario que rellene las variables de contact
			- next_index = atoi(index);
			- validar datos
			- inicia cada posición del array de contacts con el constructor de Contact
			- total_contacts++;
		show_contact(index){} -> función que busca el contacto con ese índice y lo imprime formateado
			- if index > 7 o < 0 -> "Decirle al usuario ue está fuera del array"
			- si index > total_contacts: "Decirle al usuario que meta otro index"
			- Se imprime contact[index]
		constructor
		~destructor
}

int main(){
	std::string order;
	PhoneBook phonebook;
	int index = 0;
	std::string user;

	while(1)
	{
		std::cout << "What do you want to do?\nYou can ADD a contact, SEARCH for a contact or EXIT the phonebook\n";
		std::cin >> order;
		if(order == "ADD")
		{
			phonebook.add_contact(index);
			index++;
			if(index == 8)
				index = 0;			
		}
		else if(order == "SEARCH")
		{
			std::cout << "What user are you searching for? (1 to 8): ";
			std::cin >> user; 
			phonebook.show_contact(user);
		}
		else if (order == "EXIT")
			break;
		else
			std::cout << "Only available commands are: ADD, SEARCH and EXIT\n";
	}
	return 0;
}

*/