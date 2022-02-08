#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	out "FragTrap unit on" nl;
	this->_hit_pts = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
}

FragTrap::~FragTrap()
{
	out "FragTrap off " nl;
}

void	FragTrap::already_dead()
{
	out "RIP " << "ClapTRap " << this->_name << " May it be never forgotten" nl;
}

void 	FragTrap::attack(const std::string &target)
{
	if (!this->_alive)
	{
		already_dead();
		return ;
	}
	if (!this->_energy)
	{
		out "ClapTRap FragTrap unit " << this->_name
		<< " doesn't have any power anymore, thus, can't do now, let him rest in peace" nl;
		return ;
	}
	this->_energy--;
	out "ClapTRap FragTrap unit " << this->_name << " attack " << target
	<< " and inflict " << this->_attack_damage << " damage" nl;
}
