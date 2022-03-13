#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(std::string);
		~DiamondTrap();

		void	attack(const std::string &target);

	private :
		std::string	_name;
};

#endif
