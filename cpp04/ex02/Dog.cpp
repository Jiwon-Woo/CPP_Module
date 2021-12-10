#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
	std::cout << "Default Dog created" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog) : Animal(dog), brain(new Brain())
{
	std::cout << "Copy Dog created" << std::endl;
	*(this) = dog;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
	delete this->brain;
}

Dog&	Dog::operator=(const Dog &dog)
{
	std::cout << "Assignation operator of Dog" << std::endl;
	this->type = dog.getType();
	*(this->brain) = dog.getBrain();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "This is Dog." << std::endl;
}

Brain&	Dog::getBrain() const
{
	return *(this->brain);
}

void	Dog::addIdea(std::string idea)
{
	this->brain->addIdea(idea);
}

void	Dog::showIdea() const
{
	this->brain->showIdea();
}