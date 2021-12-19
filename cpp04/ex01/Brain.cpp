#include "Brain.hpp"

# define C_NRML "\033[0m"
# define C_GREN "\033[32m"
# define C_AQUA "\033[36m"

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
	for (unsigned int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	this->idea_num = brain.idea_num;
	return (*this);
}

void	Brain::addIdea(std::string idea)
{
	std::cout << C_GREN << ">> add " << C_NRML << idea << C_GREN <<
		" to ideas[" << C_NRML << idea_num % 100 << C_GREN "]" << C_NRML << std::endl;
	this->ideas[idea_num % 100] = idea;
	idea_num += 1;
}

void	Brain::showIdea() const
{
	std::cout << C_AQUA << ">> show ideas of Brain <<" << C_NRML << std::endl;
	unsigned int num = idea_num < 100 ? idea_num : 100;
	for (unsigned int i = 0; i < num ; i++)
		std::cout << "ideas[" << i << "] : " << this->ideas[i] << std::endl;
}