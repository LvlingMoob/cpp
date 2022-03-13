#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"
# define nl << std::endl
# define out std::cout <<

class ClapTrap
{
	public :
		
		ClapTrap(std::string);
		ClapTrap();
		~ClapTrap();
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected :
		int			_hit_pts;
		int			_hit_pts_modified;
		int			_energy;
		int			_attack_damage;
		int			_alive = 1;

		void	already_dead(void);

	private :
		std::string _name;
};

#endif
