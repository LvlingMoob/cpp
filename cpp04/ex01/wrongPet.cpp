# include "wrongPet.hpp"

wrongCat::wrongCat()
{
	this->type = "wrongcat";
}

wrongCat::~wrongCat()
{
	;
}


void	wrongCat::makeSound() const
{
	std::cout << "meeeeeeeehhh" << std::endl;
}
