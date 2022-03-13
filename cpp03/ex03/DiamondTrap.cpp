#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	out "DiamondTrap unit on" nl;
	this->_hit_pts = 99;
	this->_hit_pts_modified = this->_hit_pts;
	this->_energy = 49;
	this->_attack_damage = 19;
}

DiamondTrap::~DiamondTrap()
{
	out "DiamondTrap off " nl;
}
