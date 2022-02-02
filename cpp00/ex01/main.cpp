#include "phonebook.hpp"

static void	title(void)
{
	std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" NL;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" NL;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " NL;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " NL;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" NL;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" NL;
	std::cout NL;
	std::cout << "Welcome to your phonebook !\nThe available entries are : " NL;
	std::cout << " - ADD - SEARCH - EXIT" NL NL;
}

int	main(void)
{
	Phonebook	book;
	int			len;
	std::string	user_input;

	title();
	while (user_input != "EXIT")
	{
		std::cin >> user_input;
		
		len = user_input.length();
		for (int i = 0; i < len; i++)
			user_input[i] = std::toupper(user_input[i]);

		if (user_input == "ADD")
		{
			std::cout NL;
			book.get_user_info();
			std::cout << "new entry created" NL;
		}
		else if (user_input == "SEARCH")
			book.find_users();
		std::cout NL;
	}
	return (0);
}
