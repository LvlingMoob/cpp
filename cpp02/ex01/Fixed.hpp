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
		Fixed(const int integer);
		Fixed(const float floating);

		Fixed	&operator=(Fixed const &);
		Fixed	&operator<<(Fixed const &);

		float	toFloat(void);
		int		toInt(void);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private :
		int					_nbr;
		static const int	scale;

		void	setIntToFixed(const int integer);
		int		fixedToInt(void) const;
		void	setFloatToFixed(const float floating);
		float	fixedTofloat(void) const;
};

#endif
