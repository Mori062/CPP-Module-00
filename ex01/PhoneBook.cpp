#include "PhoneBook.hpp"
#include "Contact.hpp"

void    PhoneBook::add_content(int i)
{
    std::string name;
    Contact     contact;

    std::cout << "Save a new contact" << std::endl;
    while (1)
    {
        std::cout << "Enter a first name :";
        if (std::getline(std::cin, name))
            break ;     
    }
    contact.first_name[i] = name;
    while (1)
    {
        std::cout << "Enter "<< name <<"'s last name :";
        if (std::getline(std::cin, name))
            break ;  
    }
    contact.last_name[i] = name;
    while (1)
    {
        std::cout << "Enter "<< name <<"'s nickname :";
        if (std::getline(std::cin, name))
            break ;  
    }
    contact.nickname[i] = name;
    while (1)
    {
        std::cout << "Enter "<< name <<"'s phone number :";
        if (std::getline(std::cin, name))
            break ;  
    }
    contact.phone_number[i] = name;
    while (1)
    {
        std::cout << "Enter "<< name <<"'s darkest secret :";
        if (std::getline(std::cin, name))
            break ;  
    }
    contact.darkest_secret[i] = name;
    std::cout << "Added " << contact.first_name[i] << "'s data !" <<std::endl;
}
