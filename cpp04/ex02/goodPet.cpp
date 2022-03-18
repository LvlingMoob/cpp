# include "goodPet.hpp"

/******************* CAT *******************/
Cat::Cat()
{
	this->type = "Cat";
	this->cerv = new Brain;
}

Cat::~Cat()
{
	delete this->cerv;
}


void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}


/******************* DOG *******************/
Dog::Dog()
{
	this->type = "dog";
	this->cerv = new Brain;
}

Dog::~Dog()
{
	delete this->cerv;
}


void	Dog::makeSound() const
{
	std::cout << "wouaf" << std::endl;
}