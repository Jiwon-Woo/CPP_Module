#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::stringstream	str;

		str << (i + 1);
		zombie_horde[i].set_name(name + "(" + str.str() + ")");
	}
	return zombie_horde;
}