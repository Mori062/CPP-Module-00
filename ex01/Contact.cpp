#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <typeinfo>
#include <stdexcept>

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
		while (1)
		{
			std::getline(std::cin, number);
			try
			{
				std::stoi(number);
			}
			catch (const std::invalid_argument& e)
			{
				std::cerr << "\033[31mInvalid number !\033[0m" << std::endl;
			}	
		}
		int want_index = std::stoi(number);
		if (want_index < 1 || 8 < want_index)
			std::cerr << "\033[31mInvalid number !\033[0m" << std::endl;
		else
			break ;
	}
	std::cout << "\033[32mWOW\033[0m" << std::endl;
}