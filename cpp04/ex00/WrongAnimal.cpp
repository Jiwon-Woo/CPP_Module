#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wronganimal")
{
	std::cout << "Default WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : type(wrongAnimal.getType())
{
	std::cout << "Copy WrongAnimal created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	this->type = wrongAnimal.getType();
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This is WrongAnimal." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}