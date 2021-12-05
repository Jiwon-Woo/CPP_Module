#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = SCAV_HIT_POINTS;
	this->energyPoints = SCAV_ENERGY_POINTS;
	this->attackDamage = SCAV_ATTACK_DAMAGE;
	std::cout << "Default ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = SCAV_HIT_POINTS;
	this->energyPoints = SCAV_ENERGY_POINTS;
	this->attackDamage = SCAV_ATTACK_DAMAGE;
	std::cout << "ScavTrap <" << this->name << "> created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	*this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << this->name << "> destroyed" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &scavTrap)
{
	this->name = scavTrap.getName();
	this->hitPoints = scavTrap.getHitPoints();
	this->energyPoints = scavTrap.getEnergyPoints();
	this->attackDamage = scavTrap.getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap <" << this->name << "> is died." << std::endl;
		return;
	}
	std::cout << "ScavTrap <" << this->name << "> attacks <" << target
		<< ">, causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap <" << this->name << "> is died." << std::endl;
		return;
	}
	std::cout << "ScavTrap <" << this->name << "> takes " << amount << " points of damage. The remaining HP is ";
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "0. ScavTrap <" << this->name << "> is died." << std:: endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << this->hitPoints << "." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
		std::cout << "ScavTrap <" << this->name << "> is respawned. ";
	else
		std::cout << "ScavTrap <" << this->name << "> is repaired. ";
	this->hitPoints += amount;
	std::cout << "It recovers " << amount << " points, the remaining HP is " << this->hitPoints << "." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << this->name << "> have enterred in Gate keeper mode." << std::endl;
}