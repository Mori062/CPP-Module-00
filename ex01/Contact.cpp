#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <typeinfo>

void       Contact::print_element(void)
{
    int          i = 0;
    std::string  number;

	std::cout << "|";
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < 8)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << this->first_name[i] << "|";
        std::cout << std::setw(10) << this->last_name[i] << "|";
        std::cout << std::setw(10) << this->nickname[i] << "|" << std::endl;
		i++;
	}
	while (1)
	{
		while (!std::getline(std::cin, number))
			break ;
		while ()
		while (1 > std::stoi(number) || std::stoi(number) < 8)
			break ;
		return ;
	}
}