#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << "Default WrongDog created" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &wrongDog) : WrongAnimal(wrongDog)
{
	std::cout << "Copy WrongDog created" << std::endl;
	*(this) = wrongDog;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destroyed" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog &wrongDog)
{
	std::cout << "Assignation operator of WrongDog" << std::endl;
	this->type = wrongDog.getType();
	return (*this);
}

void	WrongDog::makeSound() const
{
	std::cout << "This is WrongDog." << std::endl;
}
