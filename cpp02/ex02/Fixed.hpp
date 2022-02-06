#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
	
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

	/*destruct*/
		~Fixed();



	/*overloads*/
	// cout << ------------------------------------------------------------------------;
		friend std::ostream	&operator<<(std::ostream &c_out, Fixed const &model);

	/*pre post increment*/
	// post ---------------------------------------------------------------------------;
		void						operator++(int);
		void						operator--(int);
	// pre ----------------------------------------------------------------------------;
		void						operator++();
		void						operator--();


	/*with templates*/

		/* **************************** ASSIGNATION OPERATION **************************** */
	
	// '=' operator --------------------------------------------------------------------;
		Fixed			&operator=(const Fixed &model)
		{
			this->_nbr = model._nbr;
			return (*this);
		}
		template<typename T>
		Fixed			&operator=(const T &value)
		{
			int	tmp;

			if (typeid(value) ==  typeid(int))
			{
				tmp = (int)value << this->scale;
				this->_nbr = tmp;
				return (*this);
			}
			else
			{
				tmp = ((double)value * (double)(1 << this->scale));
				this->_nbr = tmp;
				return (*this);
			}
		}

	
	// '+' operator --------------------------------------------------------------------;
			friend Fixed			operator+(Fixed &model1, const Fixed &model2)
			{
				model1._nbr = model1._nbr + model2._nbr;
				return (model1);
			}
			template<typename T>
			friend Fixed			operator+(Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					model._nbr += tmp;
					return (model._nbr);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					model._nbr += tmp;
					return (model);
				}
			}
			template<typename T>
			friend T				operator+(T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					tmp += model._nbr;
					return (value = tmp >> model.scale);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					tmp += model._nbr;
					return (value = (double)tmp / (double)(1 << model.scale));
				}
			}
	

	// '-' operator --------------------------------------------------------------------;
			friend Fixed			operator-(Fixed &model1, const Fixed &model2)
			{
				model1._nbr -= model2._nbr;
				return (model1);
			}
			template<typename T>
			friend Fixed			operator-(Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					model._nbr -= tmp;
					return (model);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					model._nbr -= tmp;
					return (model);
				}
			}
			template<typename T>
			friend T				operator-(T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					tmp -= model._nbr;
					return (value = tmp >> model.scale);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					tmp -= model._nbr;
					return (value = (double)tmp / (double)(1 << model.scale));
				}
			}

	
	// '*' operator --------------------------------------------------------------------;
			friend Fixed			operator*(Fixed &model1, const Fixed &model2)
			{
				model1.setRawBits(((long long)model1._nbr * (long long)model2._nbr) >> model1.scale);
				return (model1);
			}
			template<typename T>
			friend Fixed			operator*(Fixed &model, const T &value)
			{
				double	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = value << model.scale;
					model.setRawBits(((long long)tmp * (long long)model._nbr) >> model.scale);
					return (model);
				}
				else
				{
					tmp = (double)value * (double)(1 << model.scale);
					model.setRawBits(((long long)tmp * (long long)model._nbr) >> model.scale);
					return (model);
				}
			}
			template<typename T>
			friend T				operator*(T &value, const Fixed &model)
			{
				value = value * model.toFloat();
				return (value);
			}
	

	// '/' operator --------------------------------------------------------------------;
			friend Fixed			operator/(Fixed &model1, const Fixed &model2)
			{
				int	tmp;

				tmp = model1.toFloat() / model2.toFloat();
				model1.setRawBits((double)tmp * (double)(1 << model1.scale));
				return (model1);
			}
			template<typename T>
			friend Fixed			operator/(Fixed &model, const T &value)
			{
				double	tmp;

				tmp = model.toFloat() / value;
				model.setRawBits(tmp * (double)(1 << model.scale));
				return (model);
			}
			template<typename T>
			friend T				operator/(T &value, const Fixed &model)
			{
				return (value = value / model.toFloat());
			}

	
	// '+=' operator -------------------------------------------------------------------;
			friend Fixed			&operator+=(Fixed &model1, const Fixed &model2)
			{
				model1.setRawBits(model1._nbr + model2._nbr);
				return (model1);
			}
			template<typename T>
			friend Fixed			&operator+=(Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp =(int)value << model.scale;
					model._nbr = model._nbr + tmp;
					return (model);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					model._nbr = model._nbr + tmp;
					return (model);
				}
			}
			template<typename T>
			friend T				&operator+=(T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					tmp = tmp + model._nbr;
					return (value = tmp >> model.scale);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					tmp = tmp + model._nbr;
					return (value = (double)tmp / (double)(1 << model.scale));
				}
			}

	
	// '-=' operator -------------------------------------------------------------------;
			friend Fixed			&operator-=(Fixed &model1, const Fixed &model2)
			{
				model1.setRawBits(model1._nbr - model2._nbr);
				return (model1);
			}
			template<typename T>
			friend Fixed			&operator-=(Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp =(int)value << model.scale;
					model._nbr = model._nbr - tmp;
					return (model);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					model._nbr = model._nbr - tmp;
					return (model);
				}
			}
			template<typename T>
			friend T				&operator-=(T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					tmp = tmp - model._nbr;
					return (value = tmp >> model.scale);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					tmp = tmp - model._nbr;
					return (value = (double)tmp / (double)(1 << model.scale));
				}
			}

	
			/* ************************** COMPARISON  CONDITION ************************** */
	
	// '<' operator --------------------------------------------------------------------;			
			friend bool				operator<(const Fixed &model1, const Fixed &model2)
			{
				return (model1._nbr < model2._nbr);
			}
			template<typename T>
			friend bool				operator<(const Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp =(int)value << model.scale;
					return (model._nbr < tmp);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (model._nbr < tmp);
				}
			}
			template<typename T>
			friend bool				operator<(const T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (tmp < model._nbr);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (tmp < model._nbr);
				}
			}

	
	// '>' operator --------------------------------------------------------------------;
			friend bool				operator>(const Fixed &model1, const Fixed &model2)
			{
				return (model1._nbr > model2._nbr);
			}
			template<typename T>
			friend bool				operator>(const Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (model._nbr > tmp);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (model._nbr > tmp);
				}
			}
			template<typename T>
			friend bool				operator>(const T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (tmp > model._nbr);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (tmp > model._nbr);
				}
			}

	
	// '<=' operator -------------------------------------------------------------------;
			friend bool				operator<=(const Fixed &model1, const Fixed &model2)
			{
				return (model1._nbr <= model2._nbr);
			}
			template<typename T>
			friend bool				operator<=(const Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = tmp = (int)value << model.scale;
					return (model._nbr <= tmp);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (model._nbr <= tmp);
				}
			}
			template<typename T>
			friend bool				operator<=(const T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = tmp = (int)value << model.scale;
					return (tmp <= model._nbr);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (tmp <= model._nbr);
				}
			}

	
	// '>=' operator -------------------------------------------------------------------;
			friend bool				operator>=(const Fixed &model1, const Fixed &model2)
			{
				return (model1._nbr >= model2._nbr);
			}
			template<typename T>
			friend bool				operator>=(const Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = tmp = (int)value << model.scale;
					return (model._nbr >= tmp);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (model._nbr >= tmp);
				}
			}
			template<typename T>
			friend bool				operator>=(const T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (tmp >= model._nbr);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (tmp >= model._nbr);
				}
			}

	
	// '==' operator -------------------------------------------------------------------;
			friend bool				operator==(const Fixed &model1, const Fixed &model2)
			{
				return (model1._nbr == model2._nbr);
			}
			template<typename T>
			friend bool				operator==(const Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (model._nbr == tmp);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (model._nbr == tmp);
				}
			}
			template<typename T>
			friend bool				operator==(const T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (tmp == model._nbr);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (tmp == model._nbr);
				}
			}

	
	// '!=' operator -------------------------------------------------------------------;
			friend bool				operator!=(const Fixed &model1, const Fixed &model2)
			{
				return (model1._nbr != model2._nbr);
			}
			template<typename T>
			friend bool				operator!=(const Fixed &model, const T &value)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (model._nbr != tmp);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (model._nbr != tmp);
				}
			}
			template<typename T>
			friend bool				operator!=(const T &value, const Fixed &model)
			{
				int	tmp;

				if (typeid(value) ==  typeid(int))
				{
					tmp = (int)value << model.scale;
					return (tmp != model._nbr);
				}
				else
				{
					tmp = ((double)value * (double)(1 << model.scale));
					return (tmp != model._nbr);
				}
			}
};

#endif
