#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

#define out std::cout <<
#define nl << std::endl

class	Animal
{
	public :
		Animal();
		Animal(Animal const &);
		~Animal();

		virtual void	makeSound() const;
		std::string		getType() const;

	protected :
		std::string type;
};

class	wrongAnimal
{
	public :
		wrongAnimal();
		~wrongAnimal();

	virtual void	makeSound() const;
	std::string		getType() const;

	protected :
		std::string type;
};


#endif
