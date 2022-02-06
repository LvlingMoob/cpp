#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# define nl << std::endl
# define out std::cout <<

class ClapTrap
{
	public :
		
		ClapTrap(std::string);
		~ClapTrap();
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private :
		std::string	_name;
		int			_hit_pts = 10;
		int			_energy = 10;
		int			_attack_damage = 0;
		int			_alive = 1;

		void	already_dead(void);
};

#endif
