#include "Karen.hpp"

Karen::Karen()
{
	;
}

Karen::~Karen()
{
	;
}

void Karen::debug(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::info(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}
void Karen::warning(void)
{
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	int	i = 0;

	while (i < 4 && level.compare(this->resp[i].alert_lvl))
		i++;
	if (i == 4)
		std::cout << "Probably complaining about insignificant problems" << std::endl;
	switch (i)
	{
		case (0):
			(this->*resp[3 - i++].func)();
		case (1):
			(this->*resp[3 - i++].func)();
		case (2):
			(this->*resp[3 - i++].func)();
		case (3):
			(this->*resp[3 - i++].func)();
	}
}
