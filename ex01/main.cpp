#include <iostream>
#include <string>

int main(void)
{
    std::string command;

    std::cout << "Type a command [ADD (add) | SEARCH (search) | EXIT (exit)] " << std::endl;
    while (1)
    {
        std:: cout << "> ";
        if (!std::getline(std::cin, command))
		{
			std::cerr << "EOF received !" << std::endl;
			break ;
		}
		if (command == "ADD")
			std::cout << "ADD" << std::endl;
		else if (command == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else if (command == "EXIT")
        {
            std::cerr << "EXIT Succeed !" << std::endl;
			break ;
        }
		else if (command.empty())
			continue ;
        else
        {
            std::cerr << "No such command !" << std::endl;
            continue ;
        }
    }
    return (0);
}