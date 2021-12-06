#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Default Cat created" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	this->type = "Cat";
	std::cout << "Copy Cat created" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat&	Cat::operator=(const Cat &cat)
{
	this->type = cat.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "This is Cat." << std::endl;
}
