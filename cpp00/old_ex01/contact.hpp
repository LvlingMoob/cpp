#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.hpp"

class Contact
{
	public :

		Contact();
		~Contact();

		int		index = 0;

	private :

		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
		std::string		_phoneNumer;
		std::string		_darkSecret;
		bool			_filled = false;
};

#endif
