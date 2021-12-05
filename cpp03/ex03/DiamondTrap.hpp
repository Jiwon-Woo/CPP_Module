#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define DIAMOND_HIT_POINTS		FRAG_HIT_POINTS
# define DIAMOND_ENERGY_POINTS	SCAV_ENERGY_POINTS
# define DIAMOND_ATTACK_DAMAGE	FRAG_ATTACK_DAMAGE

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	~DiamondTrap();
	DiamondTrap&	operator=(const DiamondTrap &diamondTrap);
	using	FragTrap::attack;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string	getName() const;
	void	whoAmI();
};

#endif