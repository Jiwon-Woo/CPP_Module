#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	std::cout << "Default Cat created" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &cat) : Animal(cat), brain(new Brain())
{
	std::cout << "Copy Cat created" << std::endl;
	*(this) = cat;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
	delete this->brain;
}

Cat&	Cat::operator=(const Cat &cat)
{
	std::cout << "Assignation operator of Dog" << std::endl;
	this->type = cat.getType();
	*(this->brain) = cat.getBrain();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "This is Cat." << std::endl;
}

Brain&	Cat::getBrain() const
{
	return *(this->brain);
}

void	Cat::addIdea(std::string idea)
{
	this->brain->addIdea(idea);
}

void	Cat::showIdea() const
{
	this->brain->showIdea();
}