#include "utils.hpp"

int is_number(std::string str)
{
	if (str.empty())
		return 0;
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
            return 0;
    }
    return 1;
}

std::string	set_info(std::string type)
{
	std::cout << type ;
	std::string ret;
	std::getline(std::cin, ret);
	return ret;
}

std::string format(std::string str)
{
	if(str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}


std::string read_nonempty_input(const std::string& prompt)
{
    std::string input;
    do {
        std::cout << prompt;
        std::getline(std::cin, input);
    } while(input.empty());
    return input;
}

std::string read_number_input(const std::string& prompt)
{
    std::string input;
    do {
        std::cout << prompt;
        std::getline(std::cin, input);
    } while(input.empty() || !is_number(input));
    return input;
}