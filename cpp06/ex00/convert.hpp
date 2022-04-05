#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>

#define out std::cout <<
#define nl << std::endl

class Convert
{
	public :
		Convert(std::string const);
		~Convert() {};

		void	printer(void) const;

	private :
		enum type
		{
			CHR = 1,
			INTEGER,
			FLT,
			DECIMAL
		};

		const std::string	_arg;
		short				_type;
		int					_integer;
		char				_chr;
		float				_flt;
		double				_dble;

		int		int_ret();
		float	float_ret();
		double	double_ret();
		void	converter();
		void	parsing();
		int		stringtoi(std::string const);
		void	stringtof(std::string);
};

#endif
