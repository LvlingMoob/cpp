#include "span.hpp"

Span::Span(unsigned int n);
{
	this->_n = n;
	for (int i = 0; i < n; i++)
		this->_vec.push_back(0);
}

Span::Span(Span const &model);
{
	this->_n = model._n;
	
}

Span::~Span();
{

}

Span	Span::&operator=(Span const &model);
{
	this->_vec.clear()
	this->_n = model._n;

}

void	Span::addNumber();
{

}

int		Span::shortestSpan() const;
{

}

int		Span::longestSpan() const;
{

}
