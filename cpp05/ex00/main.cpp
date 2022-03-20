#include "bureaucrat.hpp"

int	main()
{
	Bureaucrat	officer1("Bob", 150);
	Bureaucrat	officer2("Roger", 156);
	Bureaucrat	officer3("Maurice", -2);
	Bureaucrat	officer4("Joe", 1);

	std::cout << officer1.getGrade() << std::endl;
	std::cout << officer2.getGrade() << std::endl;
	std::cout << officer3.getGrade() << std::endl;
	std::cout << officer4.getGrade() << std::endl;

	officer4.promotion();
	officer1.retrogradation();

	std::cout << officer1.getGrade() << std::endl;
	std::cout << officer4.getGrade() << std::endl;

	officer4.retrogradation();
	officer1.promotion();

	std::cout << officer1 << std::endl;
	std::cout << officer2 << std::endl;
	std::cout << officer3 << std::endl;
	std::cout << officer4 << std::endl;
	
	return (0);
}