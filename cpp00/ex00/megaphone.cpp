#include <iostream>
#include <cstring>

char	to_upper(char c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		for (int j = 0; j < (int)strlen(argv[i]); j++)
			std::cout << to_upper(argv[i][j]);
	std::cout << std::endl;
	return 0;
}