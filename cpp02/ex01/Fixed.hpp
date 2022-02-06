#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
	/*constructs*/
		Fixed();
		Fixed(Fixed const &);
		Fixed(const int int_nbr);
		Fixed(const float float_nbr);

	/*methods*/
		float	toFloat(void) const;
		int		toInt(void) const;
		void	intToFixed(const int int_nbr);
		void	floatToFixed(const float float_nbr);	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	/*overloads*/
		Fixed				&operator=(Fixed const &);
		friend std::ostream	&operator<<(std::ostream &c_out, Fixed const &model);

		~Fixed();


	private :
		static const int	scale = 8;
		int					_nbr;
};

#endif
