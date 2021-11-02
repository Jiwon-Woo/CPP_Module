#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	this->name = "BraiiiiiiinnnzzzZ...";
}

void	Zombie::announce()
{
	std::cout << "<name> " << this->name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie '" << this->name << "' disappeared." << std::endl;
}