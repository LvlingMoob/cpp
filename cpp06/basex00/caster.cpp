#include "caster.hpp"

Caster::Caster(std::string const &arg)
{
	try
	{
		if (!Caster::isNumber(arg))
			this->char_handler(arg);
		else if (Caster::isDecimal(arg))
			this->decimal_handler(arg);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

bool	Caster::isDecimal(std::string const &str)
{
	int point = 0;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			point++;
	}
	if (point == 1)
		return (true);
	else if (point > 1)
		throw std::runtime_error("invalid entry");
	return (false);
}

bool	Caster::isNumber(std::string const &str)
{
	int	i = 0;

	if (str[i] == '-' | str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] == 'f' && i > 0 && !str[i + 1])
			i++;
		else if (!std::isdigit(str[i]) && str[i] != '.')
			return (false);
		else
			i++;
	}
	return (true);
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

void	Caster::float_handler(std::string const &arg)
{
	this->_flt = std::atof(arg.c_str());
	this->_integer = static_cast<float>(this->_flt);
	this->_chr = static_cast<char>(this->_flt);
	this->_dble = static_cast<double>(this->_flt);
}

void	Caster::double_handler(std::string const &arg)
{

}

void	Caster::decimal_handler(std::string const &arg)
{
	int	i = 0;

	while (arg[i] && arg[i] != '.')
		i++;
	if (i == 0 || (arg[i] && !arg[i + 1]))
		throw std::runtime_error("invalid entry : no digits before or after '.'");
	else if (arg.find('f'))
		this->float_handler(arg);
	else
		this->double_handler(arg);
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

Caster::~Caster()
{
	;
}
