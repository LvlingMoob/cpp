#include "convert.hpp"

Convert::Convert(std::string arg) : _arg(arg)
{
	this->_type = 0;
	try
	{
		parsing();
		converter();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Convert::parsing()
{
	int	i, f, point, sign, alpha = 0;

	if (this->_arg[i] == '-' || this->_arg[i] == '+')
		{i++; sign++;}
	if (this->_arg[i] > 0 && this->_arg[i] <= 32)
		 throw std::runtime_error("et voila... t'abuses !");
	while (this->_arg[i])
	{
		if  (this->_arg[i] == '.')
		{
			if (point >= 1 || this->_arg[i + 1] == '.')
				throw std::runtime_error("invalid entry : too many '.'");
			this->_type = DECIMAL;
			if (((i == 0 && !sign) || (i == 1 && sign)) 
				|| !(this->_arg[i + 1] >= 48 && this->_arg[i + 1] <= 57))
				throw std::runtime_error("invalid entry : no digits before or after '.'");
			point++;
		}
		else if (this->_arg[i] == 'f' && i > 0 && !this->_arg[i + 1])
		{
			this->_type = FLT;
			i++;
		}
		else if (!(this->_arg[i] >= 48 && this->_arg[i] <= 57))
		{
			this->_type = CHR;
			alpha++;
		}
		else if (alpha && ((this->_arg[i] >= 48 && this->_arg[i] <= 57)))
			throw std::runtime_error("invalid entry : digits or char only");
		if (this->_arg[i])
			i++;
	}
	if (alpha && i > 1)
		throw std::runtime_error("invalid entry : digits or char only");
	if (i > 7)
		throw std::runtime_error("et voila... t'abuses !");
	if (!alpha && !point && !this->_type)
		this->_type = INTEGER;
}

int	Convert::stringtoi(std::string const str)
{
	int		i = 0;
	int		val = 0;
	short	neg = 1;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val *= 10;
		val += (int)(str[i] - '0');
		i++;
	}
	val *= neg;
	return (val);
}

void	Convert::stringtof(std::string str)
{
	short		neg = 1;
	double		val = 0;
	std::string	part2;
	short 		pos;

	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			neg = -1;
		str = &str[1];
	}
	pos = str.find('.');
	part2 = str.substr(pos + 1, str.find("f") - (pos + 1));
	val = this->stringtoi(str.substr(0, pos));
	val += static_cast<double>(this->stringtoi(part2)) / pow(10, part2.length());
	val *= neg;
	if (this->_type == FLT)
		this->_flt = static_cast<float>(val);
	else if (this->_type == DECIMAL)
		this->_dble = val;
	out val nl;
}

void	Convert::converter()
{
	if (this->_type != CHR)
	{
		if (this->_type == FLT || this->_type == DECIMAL)
		{
			this->stringtof(this->_arg);
		}
		else if (this->_type == INTEGER)
		{
			this->_integer = this->stringtoi(this->_arg);
		}
	}
	else
	{
		this->_chr = static_cast<char>(this->_arg[0]);
		this->_integer = static_cast<int>(this->_arg[0]);
		this->_flt = static_cast<float>(this->_arg[0]);
		this->_dble = static_cast<double>(this->_arg[0]);
	}
}
