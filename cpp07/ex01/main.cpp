#include "iter.hpp"

int	func(int i)
{
	return i + 1;
}

// char	func(char i)
// {
// 	return i + 1;
// }

int main(void)
{
	{
		int arr[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

		for (int i = 0; i < 12; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
		iter(arr, sizeof(arr)/sizeof(arr[0]), func);
		for (int i = 0; i < 12; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	// {
	// 	char str[] = "Hello world!";

	// 	for (int i = 0; i < 12; i++)
	// 		std::cout << str[i] << " ";
	// 	std::cout << std::endl;
	// 	iter(str, sizeof(str)/sizeof(str[0]), func);
	// 	for (int i = 0; i < 12; i++)
	// 		std::cout << str[i] << " ";
	// 	std::cout << std::endl;
	// }
}