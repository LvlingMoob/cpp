#include "convert.hpp"

Convert::Convert(std::string arg) : _arg(arg)
{
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
	{
		i++;
		sign++;
	}
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
		throw std::runtime_error("et voila t'abuses ...");
	if (!alpha && !point)
		this->_type = INTEGER;
}

void	Convert::converter()
{
	if (this->_type != CHR)
		out "la" nl;
	else
	{
		this->_chr = static_cast<char>(this->_arg[0]);
		this->_integer = static_cast<int>(this->_arg[0]);
		this->_flt = static_cast<float>(this->_arg[0]);
		this->_dble = static_cast<double>(this->_arg[0]);
	}
}
