#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "brain.hpp"

class	Animal
{
	public :
		Animal();
		virtual ~Animal();

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
