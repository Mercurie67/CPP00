#include <Contact.hpp>

class Contact
{
	public:
		Contact();
		~Contact();
		void	show_contact_info(void);
		std::string	get_info(std::string contact_info);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int phone_nbr;
		std::string drkst_s;
} ;

Contact::Contact(){}
Contact::~Contact(){}

std::string	get_info(std::string contact_info)
{
	std::string input;

}