#include "Fixed.hpp"

//#########################################################################################
// ------------------------------------------------------------------------------CONSTRUCTS
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &model)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = model;
}

Fixed::Fixed(const int int_nbr)
{
	std::cout << "Int constructor called" << std::endl;
	intToFixed(int_nbr);

}

Fixed::Fixed(const float float_nbr)
{
	std::cout << "Float constructor called" << std::endl;
	floatToFixed(float_nbr);
}


//#########################################################################################
// --------------------------------------------------------------------------PUBLIC METHODS
float	Fixed::toFloat(void) const
{
	return (((float)this->_nbr) / ((float)(1 << this->scale)));
}

int 	Fixed::toInt(void) const
{
	return (this->_nbr >> this->scale);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
}

void	Fixed::intToFixed(const int int_nbr)
{
	this->_nbr = int_nbr << this->scale;
}

void	Fixed::floatToFixed(const float float_nbr)
{
	this->_nbr = float_nbr * ((float)(1 << this->scale));
}


//#########################################################################################
// -----------------------------------------------------------------------OPERATOR OVERLOAD
std::ostream &operator<<(std::ostream &c_out, Fixed const &model)
{
	c_out << (double)(model._nbr) / ((double)(1 << model.scale));
	return (c_out);
}

Fixed	&Fixed::operator=(Fixed const &model)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_nbr = model.getRawBits();
	return (*this);
}

void	Fixed::operator+=(int nb)
{
	int	plus_nb = nb << this->scale;
	_nbr += plus_nb;

}

void	Fixed::operator-=(int nb)
{
	int	minus_nb = nb << this->scale;
	_nbr -= minus_nb;

}


// ------------------------------------------------------------ < > operators
bool	operator<(Fixed const &model1, Fixed const &model2)
{
	return (model1._nbr < model2._nbr);
}

bool	operator>(Fixed const &model1, Fixed const &model2)
{
	return (model1._nbr > model2._nbr);
}

//----------

bool	operator<(Fixed const &model, int nb)
{
	return ((model._nbr >> model.scale) < nb);
}

bool	operator>(Fixed const &model, int nb)
{
	return ((model._nbr >> model.scale) > nb);
}

bool	operator<(Fixed const &model, float nb)
{
	return (((float)model._nbr) / ((float)(1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, float nb)
{
	return (((float)model._nbr) / ((float)(1 << model.scale)) > nb);
}

bool	operator<(Fixed const &model, double nb)
{
	return (((double)model._nbr) / ((double)(1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, double nb)
{
	return (((double)model._nbr) / ((double)(1 << model.scale)) > nb);
}

bool	operator<(Fixed const &model, char nb)
{
	return ((model._nbr) / ((1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, char nb)
{
	return ((model._nbr) / ((1 << model.scale)) > nb);
}

bool	operator<(Fixed const &model, long int nb)
{
	return (((long int )model._nbr) / ((long int )(1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, long int nb)
{
	return (((long int)model._nbr) / ((long int)(1 << model.scale)) > nb);
}

bool	operator<(Fixed const &model, long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) > nb);
}

//----------

bool	operator<(Fixed const &model, unsigned int nb)
{
	return ((model._nbr >> model.scale) < nb);
}

bool	operator>(Fixed const &model, unsigned int nb)
{
	return ((model._nbr >> model.scale) > nb);
}

bool	operator<(Fixed const &model, unsigned char nb)
{
	return ((model._nbr) / ((1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, unsigned char nb)
{
	return ((model._nbr) / ((1 << model.scale)) > nb);
}

bool	operator<(Fixed const &model, unsigned long int nb)
{
	return (((long int )model._nbr) / ((long int )(1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, unsigned long int nb)
{
	return (((long int)model._nbr) / ((long int)(1 << model.scale)) > nb);
}

bool	operator<(Fixed const &model, unsigned long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) < nb);
}

bool	operator>(Fixed const &model, unsigned long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) > nb);
}


// ------------------------------------------------------------- == operators
bool	operator==(Fixed const &model1, Fixed const &model2)
{
	return (model1._nbr == model2._nbr);
}

//----------

bool	operator==(Fixed const &model, int nb)
{
	return ((model._nbr >> model.scale) == nb);
}

bool	operator==(Fixed const &model, float nb)
{
	return (((float)model._nbr) / ((float)(1 << model.scale)) == nb);
}

bool	operator==(Fixed const &model, double nb)
{
	return (((double)model._nbr) / ((double)(1 << model.scale)) == nb);
}

bool	operator==(Fixed const &model, char nb)
{
	return ((model._nbr) / ((1 << model.scale)) == nb);
}

bool	operator==(Fixed const &model, long int nb)
{
	return (((long int )model._nbr) / ((long int )(1 << model.scale)) == nb);
}

bool	operator==(Fixed const &model, long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) == nb);
}

//----------

bool	operator==(Fixed const &model, unsigned int nb)
{
	return ((model._nbr >> model.scale) == nb);
}

bool	operator==(Fixed const &model, unsigned char nb)
{
	return ((model._nbr) / ((1 << model.scale)) == nb);
}

bool	operator==(Fixed const &model, unsigned long int nb)
{
	return (((long int )model._nbr) / ((long int )(1 << model.scale)) == nb);
}

bool	operator==(Fixed const &model, unsigned long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) == nb);
}


// ------------------------------------------------------------- != operators
bool	operator!=(Fixed const &model1, Fixed const &model2)
{
	return (model1._nbr != model2._nbr);
}

//----------

bool	operator!=(Fixed const &model, int nb)
{
	return ((model._nbr >> model.scale) != nb);
}

bool	operator!=(Fixed const &model, float nb)
{
	return (((float)model._nbr) / ((float)(1 << model.scale)) != nb);
}

bool	operator!=(Fixed const &model, double nb)
{
	return (((double)model._nbr) / ((double)(1 << model.scale)) != nb);
}

bool	operator!=(Fixed const &model, char nb)
{
	return ((model._nbr) / ((1 << model.scale)) != nb);
}

bool	operator!=(Fixed const &model, long int nb)
{
	return (((long int )model._nbr) / ((long int )(1 << model.scale)) != nb);
}

bool	operator!=(Fixed const &model, long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) != nb);
}

//----------

bool	operator!=(Fixed const &model, unsigned int nb)
{
	return ((model._nbr >> model.scale) != nb);
}

bool	operator!=(Fixed const &model, unsigned char nb)
{
	return ((model._nbr) / ((1 << model.scale)) != nb);
}

bool	operator!=(Fixed const &model, unsigned long int nb)
{
	return (((long int )model._nbr) / ((long int )(1 << model.scale)) != nb);
}

bool	operator!=(Fixed const &model, unsigned long long int nb)
{
	return (((long long int)model._nbr) / ((long long int)(1 << model.scale)) != nb);
}

//#########################################################################################
// --------------------------------------------------------------------------------DESTRUCT
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}