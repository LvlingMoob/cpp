#ifndef FORM_HPP
# define FORM_HPP

# include "bureaucrat.hpp"

class Form
{
	public:
		Form(std::string, int, int);
		~Form() {};

		void	gradeTooHighExecption();
		void	gradeTooLowExecption();
		void	beSigned(const Bureaucrat &);

		std::string	getName() const;
		int			getSignLvl() const;
		int			getExLvl() const;
		bool		getStatus() const;

	private :
		std::string	_name;
		bool		_signed;
		int			_g2ex;
		int			_g2sign;
};

std::ostream	&operator<<(std::ostream &, Form &);

#endif
