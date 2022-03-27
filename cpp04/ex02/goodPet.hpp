#ifndef GOODPET_HPP
# define GOODPET_HPP

# include "animal.hpp"

class Cat : public AAnimal
{
	public :
		Cat();
		Cat(Cat const &);
		~Cat();

		void	makeSound() const;
		void	letsSee() const;

	private :
		Brain *cerv;
};

class Dog : public AAnimal
{
	public :
		Dog();
		Dog(Dog const &);
		~Dog();

		void	makeSound() const;
		void	letsSee() const;

	private :
		Brain *cerv;
};

#endif
