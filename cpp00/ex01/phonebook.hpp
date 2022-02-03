#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

# define NL << std::endl

class Phonebook
{
	std::string	book[8][5];

	public :
		void	find_users();
		void	get_user_info();
};

#endif
