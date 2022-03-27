# include "animal.hpp"
# include "goodPet.hpp"

int	main()
{
	AAnimal *a = new Dog();

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	
	Dog *dogo = new Dog;
	Dog pochi(*dogo);

	delete dogo;

	pochi.letsSee();

	delete a;
	delete i;
	delete j;

	// const AAnimal* meta = new AAnimal();
	// std::cout << meta->getType() << " " << std::endl;
	// delete meta;

	return (0);
}
