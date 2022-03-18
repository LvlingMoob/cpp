#ifndef GOODPET_HPP
# define GOODPET_HPP

# include "animal.hpp"

class Cat : public AAnimal
{
	public :
		Cat();
		~Cat();

		void	makeSound() const;

	private :
		Brain *cerv;
};

class Dog : public AAnimal
{
	public :
		Dog();
		~Dog();

		void	makeSound() const;

	private :
		Brain *cerv;
};

#endif
