#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>

class Span
{
	public:
		Span(unsigned int);
		Span(Span const &);
		~Span();

		Span	&operator=(Span const &);

		void	addNumber();
		int		shortestSpan() const;
		int		longestSpan() const;

	private :
		unsigned int 		_n;
		std::vector<int>	_vec;
};

#endif
