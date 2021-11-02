#include "Zombie.hpp"

int	main()
{
	Zombie* jwoo = newZombie("jwoo");
	Zombie	jiwon = Zombie("jiwon");
	Zombie*	de = new Zombie();

	jwoo->announce();
	de->announce();
	jiwon.announce();
	randomChump("woo");
	de->~Zombie();
}