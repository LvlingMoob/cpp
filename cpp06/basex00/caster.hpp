#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>
#include <stdexcept>
#include <string>

#define out std::cout <<
#define nl << std::endl

class Caster
{
	public :
		Caster(std::string const &);
		~Caster();

		static	bool	isNumber(std::string const &);
		static	bool	isDecimal(std::string const &);

	private :
		int		_integer;
		char	_chr;
		float	_flt;
		double	_dble;

		void			char_handler(std::string const &);
		void			decimal_handler(std::string const &);
		void			float_handler(std::string const &);
		void			double_handler(std::string const &);
		void			print_res() const;
};

#endif
