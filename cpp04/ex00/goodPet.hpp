#ifndef GOODPET_HPP
# define GOODPET_HPP

# include "animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		~Cat();

		void	makeSound() const;
};

class Dog : public Animal
{
	public :
		Dog();
		~Dog();

		void	makeSound() const;
};

#endif
