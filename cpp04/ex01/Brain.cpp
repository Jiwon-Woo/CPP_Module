#include "Brain.hpp"

Brain::Brain() : idea_num(0)
{
	std::cout << "Default Brain created" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Copy Brain created" << std::endl;
	(*this) = brain;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain&	Brain::operator=(const Brain &brain)
{
	std::cout << "Assignation operator of Brain" << std::endl;
	for (unsigned long i = 0; i < idea_num; i++)
		idea[i] = "";
	idea_num = brain.idea_num;
	for (unsigned long i = 0; i < idea_num; i++)
		this->idea[i] = brain.idea[i];
	return (*this);
}

void	Brain::addIdea(std::string idea)
{
	this->idea[idea_num] = idea;
	idea_num++;
}

void	Brain::showIdea() const
{
	std::cout << "############" << std::endl;
	std::cout << "# showIdea #" << std::endl;
	std::cout << "############" << std::endl;
	for (unsigned long i = 0; i < idea_num; i++)
		std::cout << i << " : " << idea[i] << std::endl;
}