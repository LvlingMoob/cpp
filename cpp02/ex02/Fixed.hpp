#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
	
class Fixed
{
	private :
		static const int	scale = 8;
		int					_nbr;

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
		int		getScale(void) const;

	/*destruct*/
		~Fixed();



	/*overloads*/
	/*pre post increment*/
	// post ---------------------------------------------------------------------------;
		void						operator++(int);
		void						operator--(int);
	// pre ----------------------------------------------------------------------------;
		void						operator++();
		void						operator--();

		Fixed			&operator=(const Fixed &model);
		Fixed			operator+(Fixed const &model);
		Fixed			operator-(const Fixed &model);
		Fixed			operator*(const Fixed &model);
		Fixed			operator/(const Fixed &model);
		Fixed			&operator+=(const Fixed &model);
		Fixed			&operator-=(const Fixed &model);
		bool			operator<(const Fixed &model) const;
		bool			operator>(const Fixed &model) const;
		bool			operator>=(const Fixed &model) const;
		bool			operator<=(const Fixed &model) const;
		bool			operator==(const Fixed &model) const;
		bool			operator!=(const Fixed &model) const;

	/*with templates*/
	// '=' operator --------------------------------------------------------------------;
		template<typename T>
		Fixed			&operator=(const T &value)
		{
			int	tmp;

			tmp = ((double)value * (double)(1 << this->scale));
			this->_nbr = tmp;
			return (*this);
		}

	// '+' operator --------------------------------------------------------------------;
		template <typename T>
		Fixed			operator+(T const &value)
		{
			Fixed	tmp(this->toFloat() + value);
			return (tmp);
		}

	// '-' operator --------------------------------------------------------------------;
		template <typename T>
		Fixed			operator-(T const &value)
		{
			Fixed	tmp(this->toFloat() - value);
			return (tmp);
		}

	// '*' operator --------------------------------------------------------------------;
		template <typename T>
		Fixed			operator*(T const &value)
		{
			Fixed	tmp(this->toFloat() * value);
			return (tmp);
		}

	// '/' operator --------------------------------------------------------------------;
		template <typename T>
		Fixed			operator/(T const &value)
		{
			Fixed	tmp(this->toFloat() / value);
			return (tmp);
		}

	// '+=' operator -------------------------------------------------------------------;
		template<typename T>
		Fixed			&operator+=(const T &value)
		{
			int	tmp;

			tmp = ((double)value * (double)(1 << this->scale));
			this->_nbr = this->_nbr + tmp;
			return (*this);
		}

	// '-=' operator -------------------------------------------------------------------;
		template<typename T>
		Fixed			&operator-=(const T &value)
		{
			int	tmp;

			tmp = ((double)value * (double)(1 << this->scale));
			this->_nbr = this->_nbr - tmp;
			return (*this);
		}

	// '<' operator --------------------------------------------------------------------;
		template<typename T>
		bool				operator<(const T &value) const
		{
			int	tmp;

			tmp = (double)value * ((double)(1 << this->scale));
			return (this->_nbr < tmp);
		}

	// '>' operator --------------------------------------------------------------------;
		template<typename T>
		bool				operator>(const T &value) const
		{
			int	tmp;

			tmp = (double)value * ((double)(1 << this->scale));
			return (this->_nbr > tmp);
		}

	// '<=' operator -------------------------------------------------------------------;
		template<typename T>
		bool				operator>=(const T &value) const
		{
			int	tmp;

			tmp = (double)value * ((double)(1 << this->scale));
			return (this->_nbr >= tmp);
		}

	// '>=' operator -------------------------------------------------------------------;
		template<typename T>
		bool				operator<=(const T &value) const
		{
			int	tmp;

			tmp = (double)value * ((double)(1 << this->scale));
			return (this->_nbr <= tmp);
		}

	// '==' operator -------------------------------------------------------------------;
		template<typename T>
		bool				operator==(const T &value) const
		{
			int	tmp;

			tmp = (double)value * ((double)(1 << this->scale));
			return (this->_nbr == tmp);
		}

	// '!=' operator -------------------------------------------------------------------;
		template<typename T>
		bool				operator!=(const T &value) const
		{
			int	tmp;

			tmp = (double)value * ((double)(1 << this->scale));
			return (this->_nbr != tmp);
		}
};

std::ostream	&operator<<(std::ostream &c_out, Fixed const &model);

#endif
