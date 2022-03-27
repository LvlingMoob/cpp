#include "animal.hpp"
#include "goodPet.hpp"
#include "wrongPet.hpp"

void	wrongMain()
{
	const wrongAnimal* meta = new wrongAnimal();
	const wrongAnimal* i = new wrongCat();

	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	meta->makeSound();

	delete i;
	delete meta;
}

int	main()
{
	Animal *a = new Animal();
	Animal b(*a);
	Animal c = *a;

	out a->getType() nl;
	out b.getType() nl;
	out c.getType() nl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete a;
	delete meta;

	std::cout << std::endl;
	wrongMain();

	return (0);
}
