#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		static const int	book_num = 8;
		Contact				contacts[book_num];
		std::string			command;

	private:
		void				search_contents();
		void				show_info();
		std::string			cut_contents(std::string original);

	public:
		void				start();
};

#endif