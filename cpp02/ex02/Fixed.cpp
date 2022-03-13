#include "Fixed.hpp"

//#########################################################################################
// ------------------------------------------------------------------------------CONSTRUCTS
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &model)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = model;
}

Fixed::Fixed(const int int_nbr)
{
	// std::cout << "Int constructor called" << std::endl;
	intToFixed(int_nbr);
}

Fixed::Fixed(const float float_nbr)
{
	// std::cout << "Float constructor called" << std::endl;
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
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
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

int		Fixed::getScale(void) const
{
	return (this->scale);
}

//#########################################################################################
// -----------------------------------------------------------------------OPERATOR OVERLOAD

std::ostream &operator<<(std::ostream &c_out, Fixed const &model)
{
	c_out << (double)(model.getRawBits()) / ((double)(1 << model.getScale()));
	return (c_out);
}

void	Fixed::operator++(int)
{
	this->setRawBits(this->_nbr + (1 << this->scale));
}

void	Fixed::operator--(int)
{
	this->setRawBits(this->_nbr - (1 << this->scale));
}

void	Fixed::operator++()
{
	this->setRawBits(this->_nbr + (1 << this->scale));
}

void	Fixed::operator--()
{
	this->setRawBits(this->_nbr - (1 << this->scale));
}

Fixed			&Fixed::operator=(const Fixed &model)
{
	this->_nbr = model._nbr;
	return (*this);
}

Fixed			Fixed::operator+(Fixed const &model)
{
	Fixed	tmp(this->toFloat() + model.toFloat());
	return (tmp);
}

Fixed			Fixed::operator-(const Fixed &model)
{
	Fixed	tmp(this->toFloat() - model.toFloat());
	return (tmp);
}

Fixed			Fixed::operator*(const Fixed &model)
{
	Fixed	tmp(this->toFloat() * model.toFloat());
	return (tmp);
}

Fixed			Fixed::operator/(const Fixed &model)
{
	Fixed	tmp(this->toFloat() / model.toFloat());
	return (tmp);
}

Fixed			&Fixed::operator+=(const Fixed &model)
{
	this->setRawBits(this->_nbr + model.getRawBits());
	return (*this);
}

Fixed			&Fixed::operator-=(const Fixed &model)
{
	this->setRawBits(this->_nbr - model._nbr);
	return (*this);
}

bool			Fixed::operator<(const Fixed &model) const
{
	return (this->_nbr < model._nbr);
}

bool			Fixed::operator>(const Fixed &model) const
{
	return (this->_nbr > model._nbr);
}

bool			Fixed::operator>=(const Fixed &model) const
{
	return (this->_nbr >= model._nbr);
}

bool			Fixed::operator<=(const Fixed &model) const
{
	return (this->_nbr <= model._nbr);
}

bool			Fixed::operator==(const Fixed &model) const
{
	return (this->_nbr == model._nbr);
}

bool			Fixed::operator!=(const Fixed &model) const
{
	return (this->_nbr != model._nbr);
}

//#########################################################################################
// --------------------------------------------------------------------------------DESTRUCT
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}