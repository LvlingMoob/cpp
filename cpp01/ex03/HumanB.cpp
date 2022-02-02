#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
	if (this->_weapon == NULL)
	{
		std::cout << "no weapon in a war equal a tragic end, may " << this->_name << " find peace at he right of the Emperor" << std::endl;
	}
	else
	{
		std::cout << this->_name << " took back his " << this->_weapon->getType()
		<< " thanked the Emperor for the succes of his mission and went back to the base" << std::endl;
		std::cout << "tomorrow will again be a bloody day for the Imperium..." << std::endl;
		delete this->_weapon;
	}
}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " " << "unarmed but still, to the bitter end, with fists and teeth! For the Emperor !!!" << std::endl;
	else
		std::cout << this->_name << " " << "attack with " << this->_weapon->getType() << std::endl;
}

void	HumanB::take_weapon(Weapon *weapon)
{
	this->_weapon = weapon;
	std::cout << this->_name << " " << "find a new weapon : " << this->_weapon->getType() << " equipped" << std::endl;
}

void	HumanB::lose_weapon()
{
	std::cout << this->_name << " " << "in the midst of battle has lost his " << this->_weapon->getType() << std::endl;
	delete this->_weapon;
	this->_weapon = NULL;
}
