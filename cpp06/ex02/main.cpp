#include "identify.hpp"

# define NUM 10

int		main(void)
{
	srand(time(NULL));

	Base *base[NUM];

	std::cout << "########################" << std::endl;
	std::cout << "# Base* generate(void) #" << std::endl;
	std::cout << "########################" << std::endl;
	for (int i = 0; i < NUM; i++)
	{
		base[i] = generate();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "##########################" << std::endl;
	std::cout << "# void identify(Base* p) #" << std::endl;
	std::cout << "##########################" << std::endl;
	for (int i = 0; i < NUM; i++)
	{
		identify(base[i]);
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "##########################" << std::endl;
	std::cout << "# void identify(Base& p) #" << std::endl;
	std::cout << "##########################" << std::endl;
	for (int i = 0; i < NUM; i++)
	{
		identify(*base[i]);
		std::cout << std::endl;
	}

	for (int i = 0; i < NUM; i++)
		delete base[i];
	return 0;
}