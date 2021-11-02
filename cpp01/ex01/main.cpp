#include "Zombie.hpp"

int	main()
{
	Zombie	jiwon = Zombie("jiwon");
	Zombie*	zombies = zombieHorde(5, "jwoo");

	jiwon.announce();
	for (int i = 0; i < 5; i++)
	{
		zombies[i].announce();
	}
	for (int i = 0; i < 5; i++)
	{
		zombies[i].~Zombie();
	}
}