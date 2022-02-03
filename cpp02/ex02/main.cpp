#include "Fixed.hpp"

#define NL << std::endl

int main(void)
{
	Fixed 		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a  NL;
	std::cout << ++a  NL;
	std::cout << a  NL;
	std::cout << a++  NL;
	std::cout << a  NL;
	
	std::cout << b  NL;

	std::cout << Fixed::max(a, b)  NL;

	return 0;
}
