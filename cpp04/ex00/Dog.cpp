#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog created" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Copy Dog created" << std::endl;
	*(this) = dog;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog&	Dog::operator=(const Dog &dog)
{
	std::cout << "Assignation operator of Dog" << std::endl;
	this->type = dog.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "This is Dog." << std::endl;
}
