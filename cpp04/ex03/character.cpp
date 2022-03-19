#include "character.hpp"

std::string const	&Artilleur::getName() const
{
	return (this->_name);
}

void	Artilleur::equip(AMateria *m)
{
	;
}

void	Artilleur::unequip(int idx)
{
	;
}

void	Artilleur::use(int idx, ICharacter& target)
{
	_materia[idx]->use(target);
}
