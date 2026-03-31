#include "Contact.hpp"

std::string Contact::getFirstName() const { return first_name ;}
std::string Contact::getLastName() const { return last_name ;}
std::string Contact::getNickname() const { return nickname ;}
std::string Contact::getPhone_nbr() const { return phone_nbr ;}
std::string Contact::getDrkst_s() const { return drkst_s ;}
void Contact::setFirstName(std::string first_name) { this->first_name = first_name ;}
void Contact::setLastName(std::string last_name) { this->last_name = last_name ;}
void Contact::setNickname(std::string nickname) { this->nickname = nickname ;}
void Contact::setPhone_nbr(std::string phone_nbr) { this->phone_nbr = phone_nbr ;}
void Contact::setDrkst_s(std::string drkst_s) { this->drkst_s = drkst_s ;}