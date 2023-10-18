#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

class Contact
{
	public:
		std::string	first_name[8];
		std::string	last_name[8];
		std::string	nickname[8];
		std::string	phone_number[8];
		std::string	darkest_secret[8];
		void	print_element(void);
};

#endif