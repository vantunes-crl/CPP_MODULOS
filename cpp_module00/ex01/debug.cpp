#include "phone.h"

void test_input(phonebook **head_ref)
{
    srand (time(NULL));
    phonebook *new_node = new  phonebook();
    phonebook *last = *head_ref;
    new_node->first_name = gen_random(rand() % 15 + 1);
    new_node->last_name = gen_random(rand() % 15 + 1);
    new_node->nick_name = gen_random(rand() % 15 + 1);
    new_node->phone_number = "920328998";
    new_node->darkest_secret = gen_random(rand() % 15 + 1);
    new_node->next = NULL;
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return;
    }
    while (last->next != NULL) 
        last = last->next;
    last->next = new_node;
    return;
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