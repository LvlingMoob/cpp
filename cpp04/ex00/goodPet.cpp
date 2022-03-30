# include "goodPet.hpp"

/******************* CAT *******************/
Cat::Cat()
{
	this->type = "cat";
	out "Cat constructor" nl;
}

Cat::~Cat()
{
	out "Cat destructor" nl;;
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}


/******************* DOG *******************/
Dog::Dog()
{
	this->type = "dog";
	out "dog constructor" nl;
}

Dog::~Dog()
{
	out "dog destructor" nl;;
}

void	Dog::makeSound() const
{
	std::cout << "wouaf" << std::endl;
}
