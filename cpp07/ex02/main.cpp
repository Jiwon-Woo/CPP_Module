#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	{
		Array<int> defaultArray = Array<int>();
		std::cout << "\n\n\033[36m>> Create defaultArray by Array<int>() <<\033[0m\n\n";

		std::cout << "defaultArray.size() : " <<  defaultArray.size() << std::endl;
		try
		{
			std::cout << "defaultArray[0] : " << defaultArray[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[31m" << e.what() << "\033[33m(OutOfBound)\033[0m\n";
		}

		Array<int> nine = Array<int>(9);
		std::cout << "\n\n\033[36m>> Create nine by Array<int>(9) <<\033[0m\n\n";

		std::cout << "nine.size() : " << nine.size() << std::endl;
		try
		{
			std::cout << "nine[0] : " << nine[0] << std::endl;
			nine[0] = 6;
			std::cout << "\033[32m>> change nine[0] value\033[0m\n";
			std::cout <<  "nine[0] : " << nine[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		defaultArray = nine;
		std::cout << "\n\n\033[36m>> Assignment defaultArray = nine <<\033[0m\n\n";
		std::cout << "nine.size() : " << nine.size() << std::endl;
		std::cout << "defaultArray.size() : " << defaultArray.size() << std::endl;
		try
		{
			std::cout << "nine[0] : " << nine[0] << std::endl;
			std::cout << "defaultArray[0] : " << defaultArray[0] << std::endl;
			nine[0] = 3;
			std::cout << "\033[32m>> change nine[0] value\033[0m\n";
			std::cout <<  "nine[0] : " << nine[0] << std::endl;
			std::cout << "defaultArray[0] : " << defaultArray[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		Array<int> copy = Array<int>(nine);
		std::cout << "\n\n\033[36m>> Copy by Array<int> copy = Array<int>(nine) <<\033[0m\n\n";
		std::cout << "copy.size() : " << copy.size() << std::endl;
		std::cout << "copy.size() : " << copy.size() << std::endl;
		try
		{
			std::cout << "nine[0] : " << nine[0] << std::endl;
			std::cout << "copy[0] : " << copy[0] << std::endl;
			copy[0] = 6;
			std::cout << "\033[32m>> change copy[0] value\033[0m\n";
			std::cout << "nine[0] : " << nine[0] << std::endl;
			std::cout << "copy[0] : " << copy[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}
	return 0;
}