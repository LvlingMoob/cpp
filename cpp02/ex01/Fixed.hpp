#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

static const int scale = 8;

class Fixed
{
	public :
		Fixed();
		Fixed(Fixed const &);
		Fixed	&operator=(Fixed const &);
		Fixed	&operator+(Fixed const &);
		Fixed	&operator-(Fixed const &);
		Fixed	&operator*(Fixed const &);
		Fixed	&operator/(Fixed const &);
		Fixed	&operator>(Fixed const &);
		Fixed	&operator<(Fixed const &);
		Fixed	&operator>=(Fixed const &);
		Fixed	&operator<=(Fixed const &);
		Fixed	&operator==(Fixed const &);
		Fixed	&operator!=(Fixed const &);
	static Fixed	&min(Fixed a, Fixed b);
	static Fixed 	&max(Fixed a, Fixed b);
		~Fixed();

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	private :
		int					_nbr;
		static const int	scale;
};

#endif
