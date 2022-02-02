#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	Weapon	*basic = new Weapon; 
	Weapon	bolter("Bolter");
	Weapon	flamme_thrower("flamme thrower");

	HumanB	imperial_guard("Joe");

	imperial_guard.take_weapon(basic);
	imperial_guard.attack();
	imperial_guard.lose_weapon();
	imperial_guard.attack();

	HumanA Titus("Titus", bolter);
	
	Titus.attack();
	Titus.attack();
	Titus.take_weapon(flamme_thrower);
	Titus.attack();
	Titus.attack();

	return (0);
}
