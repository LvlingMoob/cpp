#include "array.hpp"

int	main()
{
	{
		Array<int>	*ptr_arr = new Array<int>(14);

		for (unsigned int i = 0; i < ptr_arr->size(); i++)
			(*ptr_arr)[i] = i;
		(*ptr_arr)[3] = 42;

		Array<int>	arr1(*ptr_arr);
		Array<int>	arr2;
		arr2 = arr1;
		ptr_arr->print();
		delete ptr_arr;
		arr1.print();
		arr2.print();	
	}
	std::cout << std::endl;
	{
		Array<float>	*ptr_arr = new Array<float>(14);

		for (unsigned int i = 0; i < ptr_arr->size(); i++)
			(*ptr_arr)[i] = i;
		(*ptr_arr)[3] = 42;

		Array<float>	arr1(*ptr_arr);
		Array<float>	arr2;
		arr2 = arr1;
		ptr_arr->print();
		delete ptr_arr;
		arr1.print();
		arr2.print();	
	}
	std::cout << std::endl;
	{
		Array<double>	*ptr_arr = new Array<double>(14);

		for (unsigned int i = 0; i < ptr_arr->size(); i++)
			(*ptr_arr)[i] = i;
		(*ptr_arr)[3] = 42;

		Array<double>	arr1(*ptr_arr);
		Array<double>	arr2;
		arr2 = arr1;
		ptr_arr->print();
		delete ptr_arr;
		arr1.print();
		arr2.print();	
	}
	std::cout << std::endl;
	{
		Array<std::string>	*ptr_arr = new Array<std::string>(14);

		for (unsigned int i = 0; i < ptr_arr->size(); i++)
			(*ptr_arr)[i] = std::to_string(i);
		(*ptr_arr)[3] = 42;

		Array<std::string>	arr1(*ptr_arr);
		Array<std::string>	arr2;
		arr2 = arr1;
		ptr_arr->print();
		delete ptr_arr;
		arr1.print();
		arr2.print();	
	}

	return (0);
}
