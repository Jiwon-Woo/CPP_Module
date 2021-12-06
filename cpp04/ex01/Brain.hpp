#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string	*idea;
public:
	Brain();
	Brain(const Brain& brain);
	~Brain();
	Brain& operator=(const Brain &);
	std::string*	getIdea() const;
};

#endif