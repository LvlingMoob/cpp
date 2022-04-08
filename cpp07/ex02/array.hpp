#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cctype>

template<typename T>
class Array
{
	public:
		Array();
		Array(Array const &);
		Array(unsigned int);
		~Array();

		// Array	&operator=(Array const &);
		T		&operator[](unsigned int n);
		const T &operator[](unsigned int n) const;

		Array	&operator=(Array<T> const &);

		void	print() const;
		size_t	size() const;

	private :
		unsigned int	_size;
		T				*_arr;
};

# include "array.ipp"

#endif
