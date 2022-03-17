# include "animal.hpp"

Animal::Animal()
{
	this->type = "undefined";
}

Animal::~Animal()
{
	;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "strange noise" << std::endl;
}


wrongAnimal::wrongAnimal()
{
	this->type = "undefined";
}

wrongAnimal::~wrongAnimal()
{
	;
}

std::string	wrongAnimal::getType() const
{
	return (this->type);
}

void	wrongAnimal::makeSound() const
{
	std::cout << "strange wrong noise" << std::endl;
}
