#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template< typename T >

class Array
{
	public:

		class InvalidIndexException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Invalid index";
				}
		};

		Array() :  _array(new T[0]), _size(0){};
		Array(int n) : _array(new T[n]), _size(n){};
		Array( Array const & src ) : _array(new T[src._size]), _size(src._size)
		{
			for(int i = 0; i < src._size; i++)
			{
				this->_array[i] = src._array[i];
			}
		};
		~Array()
		{
			delete[] this->_array;
		};

		int	size()
		{
			return this->_size;
		};

		Array &		operator=( Array const & rhs )
		{
			if (*this != rhs)
			{
				this->_size = rhs._size;
				this->_array = rhs._array;
				for(int i = 0; i < rhs._size; i++)
				{
					this->_array[i] = rhs._array[i];
				}
			}
			return *this;
		};

		T &			operator[](int i)
		{
			try
			{
				if (i >= this->_size || i < 0)
					throw	InvalidIndexException();
			}
			catch(InvalidIndexException& e)
			{
				std::cout << e.what() << std::endl;
			}
			return this->_array[i];
		}

	private:

		T *				_array;
		int	_size;

};

#endif /* *********************************************************** ARRAY_H */