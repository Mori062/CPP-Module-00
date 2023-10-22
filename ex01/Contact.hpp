#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		static const int	max_content = 5;
		std::string	index[max_content];
		std::string	contents[max_content];

	public:
		Contact();
		void		add_content(void);
		std::string	get_contents(std::string target);
		void		print_info(void);
};

#endif