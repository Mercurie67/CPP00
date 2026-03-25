#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <string>

int is_number(std::string str);
std::string	set_info(std::string type);
std::string format(std::string str);
std::string read_nonempty_input(const std::string& prompt);
std::string read_number_input(const std::string& prompt);

#endif