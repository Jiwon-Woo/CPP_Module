#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* arr, size_t len, T (*f)(T t))
{
	for (size_t i = 0; i < len; i++)
		arr[i] = f(arr[i]);
}

#endif