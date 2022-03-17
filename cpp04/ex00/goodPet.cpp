# include "goodPet.hpp"

/******************* CAT *******************/
Cat::Cat()
{
	this->type = "cat";
}

Cat::~Cat()
{
	;
}


void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}


/******************* DOG *******************/
Dog::Dog()
{
	this->type = "dog";
}

Dog::~Dog()
{
	;
}


void	Dog::makeSound() const
{
	std::cout << "wouaf" << std::endl;
}