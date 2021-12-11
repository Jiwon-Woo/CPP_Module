#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
	unsigned int	idea_num;
public:
	Brain();
	Brain(const Brain& brain);
	~Brain();
	Brain&	operator=(const Brain &);
	void	addIdea(std::string idea);
	void	showIdea() const;
};

#endif