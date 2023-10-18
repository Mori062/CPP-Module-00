#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string	index[5];
		std::string	contents[5];

	public:
		Contact();
		void		add_content(void);
		std::string	get_contents(std::string target);
		void		print_info(void);
};

#endif