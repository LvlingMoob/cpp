#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :

		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void	attack(void);
		void	take_weapon(Weapon weapon);

	private :

		Weapon	basic;
		std::string _name;
		Weapon &_weapon = basic;
};

#endif
