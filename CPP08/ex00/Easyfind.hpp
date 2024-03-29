# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class NoOccurenceException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "No occurence found";
		}
};

template<typename T>
typename T::iterator	easyfind(T& container, int n)
{
	typename T::iterator	found;

	found = std::find(container.begin(), container.end(), n);
	if (found == container.end())
		throw NoOccurenceException();
	else 
		return found;
}

#endif