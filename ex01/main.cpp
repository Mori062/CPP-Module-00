#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    std::string command;
    PhoneBook   phonebook;
    Contact     contact;
    int         i = 0;

    std::cout << "\033[32mType a command [ADD (add) | SEARCH (search) | EXIT (exit)] \033[0m" << std::endl;
    while (1)
    {
        std:: cout << "$> ";
        if (!std::getline(std::cin, command))
		{
			std::cerr << "\033[31mEOF received ! Bye !\033[0m" << std::endl;
			break ;
		}
		if (command == "ADD")
        {
            phonebook.add_content(i++ %8);
        }
		else if (command == "SEARCH")
        {
            contact.print_element();
			// std::cout << "SEARCH" << std::endl;
        }
		else if (command == "EXIT")
        {
            std::cerr << "\033[31mEXIT Succeed ! Bye !\033[0m" << std::endl;
			break ;
        }
		else if (command.empty())
			continue ;
        else
        {
            std::cerr << "\033[31mNo such \033[0m[" << command <<"]\033[31m command !\033[0m" << std::endl;
            continue ;
        }
    }
    return (0);
}