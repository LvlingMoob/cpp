#include "phonebook.hpp"

void	Phonebook::Phonebook()
{
	;
}

void	Phonebook::~Phonebook()
{
	;
}

void	add_new_contact()
{
	int	i = 0;

	while (this->book[i].index)
		i++;
	if (i == 7)
		slide_contacts();
	book[i] = 
}

void	Phonebook::get_user_info()
{
	static std::string	messages[5] = {
		"Enter first name",
		"Enter last name",
		"Enter nickname",
		"Enter phone number",
		"Enter darkest secret"
	};
	std::string			user_input;

	for (int column = 0; column < 5; column++)
	{
		std::cout << messages[column] NL;
		std::cin >> user_input;
		if (user_input.length() > 10)
		{
			user_input[9] = '.';
			user_input.resize(10);
		}
		this->page[column] = user_input;
	}
	add_new_contact();
}

// void	Phonebook::find_users()
// {
// 	int	offset;

// 	std::cout NL;
// 	std::cout << "| FirstName|  LastName|  NickName| PhoneNber|DarkSecret|" NL;
// 	std::cout << "|----------|----------|----------|----------|----------|" NL;

// 	for (int i = 0; i < 8; i++)
// 	{
// 	 	std::cout << '|';
// 		for (int j = 0; j < 5; j++)
// 		{
// 			offset = 10 - this->book[i][j].length();
// 			while (offset--)
// 				std::cout << " ";
// 			std::cout << this->book[i][j] << '|';
// 		}
// 		std::cout NL << "|----------|----------|----------|----------|----------|" NL;
// 	}
// }
