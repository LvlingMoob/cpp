#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "materia.hpp"

class AMateria;

class ICharacter
{
	public:
		//construct
		virtual ~ICharacter() {}
		
		//methods
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
};


class Artilleur : public ICharacter
{
	public :
		//construct
		Artilleur(std::string name) : _name(name) {};
		~Artilleur();

		//methods
		virtual std::string const	&getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);

	private :
		std::string const	_name;
		AMateria			*_materia[4];
};

#endif
