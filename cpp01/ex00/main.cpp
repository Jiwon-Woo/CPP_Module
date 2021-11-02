#include "Zombie.hpp"

int	main()
{
	Zombie* jwoo = newZombie("jwoo");
	Zombie	jiwon = Zombie("jiwon");

	jwoo->announce();
	jiwon.announce();
	randomChump("woo");
}