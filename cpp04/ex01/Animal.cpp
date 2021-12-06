#include "Animal.hpp"

Animal::Animal() : type("animal")
{
	std::cout << "Default Animal created" << std::endl;
}

Animal::Animal(const Animal &animal) : type(animal.getType())
{
	std::cout << "Copy Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal&	Animal::operator=(const Animal &animal)
{
	this->type = animal.getType();
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "This is Animal." << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}