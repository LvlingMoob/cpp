# include "animal.hpp"
# include "goodPet.hpp"
# include "wrongPet.hpp"

void	wrongMain()
{
	const wrongAnimal* meta = new wrongAnimal();
	const wrongAnimal* i = new wrongCat();

	std::cout << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	delete i;
	delete meta;
}

int	main()
{
	Animal *a = new Dog();
	Animal b(*a);
	Animal c = *a;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	out a->getType() nl;
	out b.getType() nl;
	out c.getType() nl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();

	Dog *dogo = new Dog;
	Dog pochi(*dogo);
	std::cout << pochi.getType() << std::endl;
	pochi.letsSee();

	meta->makeSound();

	delete a;
	delete i;
	delete j;
	delete meta;
	delete dogo;

	wrongMain();

	return (0);
}
