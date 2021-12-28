#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <deque>
# include <list>

template<typename T>
int easyfind(T& container, int toFind)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), toFind);

	if (iter == container.end())
		throw std::exception();
	return *iter;
}

#endif