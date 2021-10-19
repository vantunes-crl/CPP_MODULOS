#include "phone.hpp"

void test_input(phonebook *book)
{
    srand (time(NULL));
    book->SetFirstName(gen_random(rand() % 15 + 1));
    book->SetLastName(gen_random(rand() % 15 + 1));
    book->SetNickName(gen_random(rand() % 15 + 1));
    book->SetPhoneNumber("920328998");
    book->SetDarkestSecret(gen_random(rand() % 15 + 1));
}


std::string gen_random(const int len) 
{
    
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    
    srand( (unsigned) time(NULL) * getpid());

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
       
    return tmp_s;
}