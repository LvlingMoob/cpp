#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string, int);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		promotion();
		void		retrogradation();

	private:
		const std::string	_name;
		int					_grade = 0;
		
		void	gradeTooHightExecption();
		void	gradeTooLowExecption();
};

std::ostream	&operator<<(std::ostream &c_out, Bureaucrat const &model);

#endif
