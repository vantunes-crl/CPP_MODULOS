#include "book.hpp"

void test_input(phonebook *book)
{
    srand (time(NULL));
    book->first_name = gen_random(rand() % 15 + 1);
    book->last_name = gen_random(rand() % 15 + 1);
    book->nick_name = gen_random(rand() % 15 + 1);
    book->phone_number = "920328998";
    book->darkest_secret = gen_random(rand() % 15 + 1);
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