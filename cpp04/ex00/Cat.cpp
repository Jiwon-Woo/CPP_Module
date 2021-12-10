#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat created" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Copy Cat created" << std::endl;
	*(this) = cat;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat&	Cat::operator=(const Cat &cat)
{
	std::cout << "Assignation operator of Cat" << std::endl;
	this->type = cat.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "This is Cat." << std::endl;
}
