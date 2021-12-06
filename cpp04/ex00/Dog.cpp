#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Default Dog created" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	this->type = "Dog";
	std::cout << "Copy Dog created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog&	Dog::operator=(const Dog &dog)
{
	this->type = dog.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "This is Dog." << std::endl;
}
