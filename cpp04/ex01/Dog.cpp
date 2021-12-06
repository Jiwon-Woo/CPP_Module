#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
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
	delete this->brain;
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
