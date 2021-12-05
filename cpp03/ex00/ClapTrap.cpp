#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(HIT_POINTS), energyPoints(ENERGY_POINTS), attackDamage(ATTACK_DAMAGE)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(HIT_POINTS), energyPoints(ENERGY_POINTS), attackDamage(ATTACK_DAMAGE)
{
	std::cout << "ClapTrap <" << this->name << "> created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << this->name << "> destroyed" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->name = clapTrap.getName();
	this->hitPoints = clapTrap.getHitPoints();
	this->energyPoints = clapTrap.getEnergyPoints();
	this->attackDamage = clapTrap.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap <" << this->name << "> is died." << std::endl;
		return;
	}
	std::cout << "ClapTrap <" << this->name << "> attacks <" << target
		<< ">, causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap <" << this->name << "> is died." << std::endl;
		return;
	}
	std::cout << "ClapTrap <" << this->name << "> takes " << amount << " points of damage. The remaining HP is ";
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "0. ClapTrap <" << this->name << "> is died." << std:: endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << this->hitPoints << "." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
		std::cout << "ClapTrap <" << this->name << "> is respawned. ";
	else
		std::cout << "ClapTrap <" << this->name << "> is repaired. ";
	this->hitPoints += amount;
	std::cout << "It recovers " << amount << " points, the remaining HP is " << this->hitPoints << "." << std::endl;
}

std::string	ClapTrap::getName() const
{
	return this->name;
}

unsigned int	ClapTrap::getHitPoints() const
{
	return this->hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}