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
	this->_nbr = (double)float_nbr * ((double)(1 << this->scale));
}


//#########################################################################################
// -----------------------------------------------------------------------OPERATOR OVERLOAD
Fixed	&Fixed::operator=(Fixed const &model)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_nbr = model.getRawBits();
	return (*this);
}


std::ostream &operator<<(std::ostream &c_out, Fixed const &model)
{
	c_out << (double)(model._nbr) / ((double)(1 << model.scale));
	return (c_out);
}


//#########################################################################################
// --------------------------------------------------------------------------------DESTRUCT
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}