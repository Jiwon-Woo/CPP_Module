#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = FRAG_HIT_POINTS;
	this->energyPoints = FRAG_ENERGY_POINTS;
	this->attackDamage = FRAG_ATTACK_DAMAGE;
	std::cout << "Default FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = FRAG_HIT_POINTS;
	this->energyPoints = FRAG_ENERGY_POINTS;
	this->attackDamage = FRAG_ATTACK_DAMAGE;
	std::cout << "FragTrap <" << this->name << "> created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << this->name << "> destroyed" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &fragTrap)
{
	this->name = fragTrap.getName();
	this->hitPoints = fragTrap.getHitPoints();
	this->energyPoints = fragTrap.getEnergyPoints();
	this->attackDamage = fragTrap.getAttackDamage();
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "FragTrap <" << this->name << "> is died." << std::endl;
		return;
	}
	std::cout << "FragTrap <" << this->name << "> attacks <" << target
		<< ">, causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "FragTrap <" << this->name << "> is died." << std::endl;
		return;
	}
	std::cout << "FragTrap <" << this->name << "> takes " << amount << " points of damage. The remaining HP is ";
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "0. FragTrap <" << this->name << "> is died." << std:: endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << this->hitPoints << "." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
		std::cout << "FragTrap <" << this->name << "> is respawned. ";
	else
		std::cout << "FragTrap <" << this->name << "> is repaired. ";
	this->hitPoints += amount;
	std::cout << "It recovers " << amount << " points, the remaining HP is " << this->hitPoints << "." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap <" << this->name << "> request a positive high fives." << std::endl;
}