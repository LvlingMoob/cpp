#include <iostream>
#include "caster.hpp"

#define out std::cout <<
#define nl << std::endl

int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	std::string arg = argv[1];

	Caster cast(arg);

	return (0);
}