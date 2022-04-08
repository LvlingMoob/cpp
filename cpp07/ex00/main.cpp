#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	&min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

int	main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	// ::swap(a, c);
	// std::cout << "a = " << a << ", c = " << c << std::endl;
	// std::cout << "min( a, c ) = " << ::min( a, c ) << std::endl;
	// std::cout << "max( a, c ) = " << ::max( a, c ) << std::endl;

	return (0);
}
