#include <iostream>

#define NL << std::endl

int	main()
{
	std::string hello_brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &hello_brain;
	std::string &stringREF = hello_brain;

	std::cout << &hello_brain NL;
	std::cout << stringPTR NL;
	std::cout << &stringREF NL;

	return (0);
}