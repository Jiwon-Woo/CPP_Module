#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FRAG_HIT_POINTS 100
# define FRAG_ENERGY_POINTS 100
# define FRAG_ATTACK_DAMAGE 30

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragTrap);
	~FragTrap();
	FragTrap&	operator=(const FragTrap &fragTrap);
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFivesGuys(void);
};

#endif