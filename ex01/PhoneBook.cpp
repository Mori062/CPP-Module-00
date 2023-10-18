#include "PhoneBook.hpp"
#include "Contact.hpp"  

std::string PhoneBook::cut_contents(std::string original)
{
    if (original.size() > 10)
        return (original.substr(0, 9) + ".");
    else
        return(original);
}

void      PhoneBook::show_info(void)
{
    int i = 0;

	std::cout << "|";
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < 8)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << cut_contents(contacts[i].get_contents("first name")) << "|";
        std::cout << std::setw(10) << cut_contents(contacts[i].get_contents("last name")) << "|";
        std::cout << std::setw(10) << cut_contents(contacts[i].get_contents("nickname")) << "|" << std::endl;
		i++;
	}
}

void    PhoneBook::search_contents(void)
{
    show_info();
    std::string num;

    std::getline(std::cin, num);
    for (int i = 0; i < book_num; i++)
    {
        if (num == std::to_string(i + 1))
        {
            contacts[i].print_info();
            return ;
        }
    }
}

void    PhoneBook::start(void)
{
    int i = 0;

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
            std::cerr << "ADD" << std::endl;
            contacts[i++ % book_num].add_content();
        }
		else if (command == "SEARCH")
            search_contents();
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
}