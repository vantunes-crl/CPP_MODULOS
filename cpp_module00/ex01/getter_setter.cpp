#include "phone.hpp"

/*setters*/
void phonebook::SetFirstName(std::string str) {first_name = str;}
void phonebook::SetLastName(std::string str) {last_name = str;}
void phonebook::SetNickName(std::string str) {nick_name = str;}
void phonebook::SetPhoneNumber(std::string str) {phone_number = str;}
void phonebook::SetDarkestSecret(std::string str) {darkest_secret = str;}

/*getters*/
std::string phonebook::GetFirstName() {return (first_name);}
std::string phonebook::GetLastName() {return (last_name);}
std::string phonebook::GetNickName() {return (nick_name);}
std::string phonebook::GetPhoneNumber() {return (phone_number);}
std::string phonebook::GetDarkestSecret(){return (darkest_secret);}