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
		friend std::ostream	&operator<<(std::ostream &c_out, Fixed const &model);
		Fixed				&operator=(Fixed const &);
		void				operator+=(int);
		void				operator-=(int);

// ------------------------------------------------------------ < > operators
		friend bool			operator<(Fixed const &, Fixed const &);
		friend bool			operator>(Fixed const &, Fixed const &);
		//----------
		friend bool			operator<(Fixed const &, int);
		friend bool			operator>(Fixed const &, int);
		friend bool			operator<(Fixed const &, float);
		friend bool			operator>(Fixed const &, float);
		friend bool			operator<(Fixed const &, double);
		friend bool			operator>(Fixed const &, double);
		friend bool			operator<(Fixed const &, char);
		friend bool			operator>(Fixed const &, char);
		friend bool			operator<(Fixed const &, long int);
		friend bool			operator>(Fixed const &, long int);
		friend bool			operator<(Fixed const &, long long int);
		friend bool			operator>(Fixed const &, long long int);
		//----------
		friend bool			operator<(Fixed const &, unsigned int);
		friend bool			operator>(Fixed const &, unsigned int);
		friend bool			operator<(Fixed const &, unsigned char);
		friend bool			operator>(Fixed const &, unsigned char);
		friend bool			operator<(Fixed const &, unsigned long int);
		friend bool			operator>(Fixed const &, unsigned long int);
		friend bool			operator<(Fixed const &, unsigned long long int);
		friend bool			operator>(Fixed const &, unsigned long long int);

// ------------------------------------------------------------- == operators
		friend bool			operator==(Fixed const &, Fixed const &);
		//----------
		friend bool			operator==(Fixed const &, int);
		friend bool			operator==(Fixed const &, float);
		friend bool			operator==(Fixed const &, double);
		friend bool			operator==(Fixed const &, char);
		friend bool			operator==(Fixed const &, long int);
		friend bool			operator==(Fixed const &, long long int);
		//----------
		friend bool			operator==(Fixed const &, unsigned int);
		friend bool			operator==(Fixed const &, unsigned char);
		friend bool			operator==(Fixed const &, unsigned long int);
		friend bool			operator==(Fixed const &, unsigned long long int);

// ------------------------------------------------------------- != operators
		friend bool			operator!=(Fixed const &, Fixed const &);
		//----------
		friend bool			operator!=(Fixed const &, int);
		friend bool			operator!=(Fixed const &, float);
		friend bool			operator!=(Fixed const &, double);
		friend bool			operator!=(Fixed const &, char);
		friend bool			operator!=(Fixed const &, long int);
		friend bool			operator!=(Fixed const &, long long int);
		//----------
		friend bool			operator!=(Fixed const &, unsigned int);
		friend bool			operator!=(Fixed const &, unsigned char);
		friend bool			operator!=(Fixed const &, unsigned long int);
		friend bool			operator!=(Fixed const &, unsigned long long int);
		~Fixed();

	private :
		static const int	scale = 8;
		int					_nbr;
};

#endif
