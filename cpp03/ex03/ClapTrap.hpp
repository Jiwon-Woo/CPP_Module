#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	unsigned int	hitPoints;		// hp
	unsigned int	energyPoints;
	unsigned int	attackDamage;	// 공격력
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clapTrap);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap &clapTrap);
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string	getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;
};

#endif