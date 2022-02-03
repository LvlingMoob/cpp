#include "Fixed.hpp"

// CONSTRUCT
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &model)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = model;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called" << std::endl;

}


// PUBLIC FUNCTION
float	toFloat(void)
{
	std::cout << "toFloat function" << std::endl;
	return (0);
}

int 	toInt(void)
{
	std::cout << "toInt function" << std::endl;
	return (0);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
}


// OPERATOR OVERLOAD
Fixed	&Fixed::operator=(Fixed const &model)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_nbr = model.getRawBits();
	return (*this);
}

Fixed &Fixed::operator<<(Fixed const &model)
{
	return (*this);
}


// PRIVATE
void	Fixed::setIntToFixed(const int integer)
{
	;
}

int Fixed::fixedToInt(void) const
{
	return (0);
}

void	Fixed::setFloatToFixed(const float floating)
{
	;
}

float	Fixed::fixedTofloat(void) const
{
	return (0);
}


// DESTRUCT
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}