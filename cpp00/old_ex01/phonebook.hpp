#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

# define NL << std::endl
# define out std::cout

class Phonebook
{
	public :

		Phonebook();
		~Phonebook();

		void	find_users(int index = -1);
		void	get_user_info();
		void	print_contact();

	private :

		std::string	page[5];
		Contact	*book = new Contact[8];

		void	add_new_contact();
		void	slide_contacts();
};

#endif
