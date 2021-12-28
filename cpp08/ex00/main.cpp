#include "easyfind.hpp"
#include <iostream>

int	main()
{
	std::vector<int> vec;

	for (int i = 1; i < 10; i++)
		vec.push_back(i);

	try
	{
		std::cout << easyfind(vec, 3) << std::endl;
		std::cout << easyfind(vec, 5) << std::endl;
		std::cout << easyfind(vec, 8) << std::endl;
		std::cout << easyfind(vec, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " (Not Found)" << std::endl;
	}
}