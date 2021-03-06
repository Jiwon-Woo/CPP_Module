#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& first, T& second)
{
	T temp = first;

	first = second;
	second = temp;
}

template <typename T>
T	min(T const first, T const second)
{
	if (first < second)
		return first;
	else
		return second;
}

template <typename T>
T	max(T const first, T const second)
{
	if (first > second)
		return first;
	else
		return second;
}

#endif