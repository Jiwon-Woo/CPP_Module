#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>

class	Zombie {

private:
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	void	announce();
	void	set_name(std::string name);
	~Zombie();

};

Zombie* zombieHorde( int N, std::string name );

#endif