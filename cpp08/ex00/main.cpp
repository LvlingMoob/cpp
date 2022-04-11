#include "easyfind.hpp"

int	main()
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	std::vector<int>::iterator iter = begin(vec);

	while (iter != end(vec))
	{
		std::cout << *iter++ << " "; 
	}
	std::cout << std::endl;

	try
	{
		easyfind(vec, 4);
		std::cout << "4 : foundd!" << std::endl;
		easyfind(vec, 8);
		std::cout << "8 : foundd!" << std::endl;
		easyfind(vec, 12);
		std::cout << "12 : foundd!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	return (0);
}
