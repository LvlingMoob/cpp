#include "Fixed.hpp"

#define NL << std::endl

int main(void)
{
	Fixed 		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	// std::cout << "a is" << a  NL;
	// std::cout << "b is" << b  NL;
	// std::cout << "c is" << c NL;
	// std::cout << "d is" << d NL;
	
	// std::cout << "a is" << a.toInt() << "as integer"  NL;
	// std::cout << "b is" << b.toInt() << "as integer"  NL;
	// std::cout << "c is" << c.toInt() << "as integer"  NL;
	// std::cout << "d is" << d.toInt() << "as integer"  NL;

	return 0;
}


// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Assignation operator called
// Float constructor called
// Assignation operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called