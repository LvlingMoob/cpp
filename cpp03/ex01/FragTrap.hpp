#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
	public :

		FragTrap(std::string);
		~FragTrap();

		void	attack(const std::string& target);
		void	guardGame();

	private :

		std::string	_name;
		int			_hit_pts;
		int			_energy;
		int			_attack_damage;
		int			_alive = 1;

		void	already_dead(void);

};
