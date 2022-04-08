#include "array.hpp"

int	main()
{
	// Array<short>	arr2(15);
	Array<int>		*test = new Array<int>(14);

	for (unsigned int i = 0; i < test->size(); i++)
		(*test)[i] = i;
	(*test)[3] = 42;
	Array<int>		arr1(*test);
	test->print();
	delete test;


	arr1.print();

	return (0);
}
