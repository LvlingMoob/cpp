#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name;
	this->basic = weapon;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " took back his " << this->_weapon.getType() 
	<< " thanked the Emperor for the succes of his mission and went back to the base" << std::endl;
	std::cout << "tomorrow will again be a bloody day for the Imperium..." << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " " << "attack with " << this->_weapon.getType() << std::endl;
}

void	HumanA::take_weapon(Weapon weapon)
{
	this->basic = weapon;
	std::cout << this->_name << " " << "find a new weapon : " << this->_weapon.getType() << " equipped" << std::endl;
}
