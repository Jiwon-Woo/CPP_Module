#include "Brain.hpp"

Brain::Brain() : idea(new std::string[100])
{
	std::cout << "Default Brain created" << std::endl;
}

Brain::Brain(const Brain &brain) : idea(brain.getIdea())
{
	std::cout << "Copy Brain created" << std::endl;
}

Brain::~Brain()
{
	delete[] this->idea;
	std::cout << "Brain destroyed" << std::endl;
}

Brain&	Brain::operator=(const Brain &brain)
{
	delete[] this->idea;
	this->idea = brain.getIdea();
	return (*this);
}

std::string*	Brain::getIdea() const
{
	return this->idea;
}