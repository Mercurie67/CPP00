/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:30:28 by medel-ca          #+#    #+#             */
/*   Updated: 2026/03/25 17:30:28 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        if(input.empty())
            std::cout << "\033[31mYou can't save an empty field\033[0m\n";
    } while(input.empty());
    return input;
}

std::string read_number_input(const std::string& prompt)
{
    std::string input;
    do {
        std::cout << prompt;
        std::getline(std::cin, input);
        if(input.empty())
            std::cout << "\033[31mYou can't save an empty field\033[0m\n";
        else if(!is_number(input))
            std::cout << "\033[31mOnly digits!\033[0m\n";
    } while(input.empty() || !is_number(input));
    return input;
}