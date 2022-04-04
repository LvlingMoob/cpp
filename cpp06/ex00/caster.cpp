#include "caster.hpp"

Caster::Caster(std::string const &arg)
{
	try
	{
		if (!Caster::isNumber(arg))
			Caster::char_handler(arg);
		else if (Caster::isDecimal(arg))
		{
			out "la" nl;
			Caster::decimal_handler(arg);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Caster::print_res() const
{
	if (this->_chr >= 0 && this->_chr <= 32)
		out "char: Non displayable" nl;
	else
		out this->_chr nl;
	out this->_integer nl;
	if (this->_flt == this->_integer)
		out this->_flt << ".0f" nl;	
	else
		out this->_flt << 'f' nl;

	if (this->_dble == this->_integer)
		out this->_dble << ".0f" nl;
	else
		out this->_dble nl;
}

void	Caster::decimal_handler(std::string const &arg)
{
	int	i = 0;

	while (arg[i] && arg[i] != '.')
		i++;
	if (i == 0 || !arg[i])
		throw std::runtime_error("invalid entry : no digits before or after '.'");
}

void	Caster::char_handler(std::string const &arg)
{
	if (arg.length() >= 2)
		throw std::runtime_error("invalid entry : digits or char only");
	else
	{
		this->_chr = static_cast<char>(arg[0]);
		this->_integer = static_cast<int>(arg[0]);
		this->_flt = static_cast<float>(arg[0]);
		this->_dble = static_cast<double>(arg[0]);
	}
} 

bool	Caster::isDecimal(std::string const &str)
{
	for (int i = 0; i < str[i]; i++)
	{
		if (str[i] == '.' && i > 0 && str[i + 1])
			return (true);
	}
	return (false);
}

bool	Caster::isNumber(std::string const &str)
{
	int	i = 0;

	if (str[i] == '-' | str[i] == '+')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != '.')
		{
			if (str[i] == 'f' && i > 0 && !str[i + 1])
				i++;
			else
				return (false);
		}
		i++;
	}
	return (true);
}

Caster::~Caster()
{
	;
}
