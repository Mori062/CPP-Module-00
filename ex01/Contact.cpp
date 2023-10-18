#include "Contact.hpp"

Contact::Contact()
{
	index[0] = "first name";
	index[1] = "last name";
	index[2] = "nickname";
	index[3] = "phone number";
	index[4] = "darkest secret";
}

void	Contact::add_content(void)
{
	int			i = 0;
	std::string element;

	while (i < 5)
	{
		std::cout << index[i] << std::endl;
		std::getline(std::cin, element);
		contents[i] = element;
		i++;
	}
}

std::string	Contact::get_contents(std::string target)
{
	for (int i = 0; i < 5 ; i++)
	{
		if (index[i] == target)
			return (contents[i]);
	}
	return (NULL);
}

void	Contact::print_info(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::left << std::setw(15) << index[i] << ":	" << contents[i] << std::endl;
	}
}
