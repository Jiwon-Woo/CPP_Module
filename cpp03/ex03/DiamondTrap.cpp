#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), name("")
{
	ClapTrap::name += "_clap_name";
	this->hitPoints = FRAG_HIT_POINTS;
	this->energyPoints = SCAV_ENERGY_POINTS;
	this->attackDamage = FRAG_ATTACK_DAMAGE;
	std::cout << "Default DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), name(name)
{
	ClapTrap::name += "_clap_name";
	this->hitPoints = FRAG_HIT_POINTS;
	this->energyPoints = SCAV_ENERGY_POINTS;
	this->attackDamage = FRAG_ATTACK_DAMAGE;
	std::cout << "DiamondTrap <" << this->name << "> created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
{
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap <" << this->name << "> destroyed" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	this->name = diamondTrap.getName();
	ClapTrap::name = diamondTrap.ClapTrap::getName();
	this->hitPoints = diamondTrap.getHitPoints();
	this->energyPoints = diamondTrap.getEnergyPoints();
	this->attackDamage = diamondTrap.getAttackDamage();
	return (*this);
}

std::string	DiamondTrap::getName() const
{
	return this->name;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "DiamondTrap <" << this->name << "> is died" << std::endl;
		return;
	}
	std::cout << "DiamondTrap <" << this->name << "> is attacked. The remaining HP is ";
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "0. DiamondTrap <" << this->name << "> is died" << std:: endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << this->hitPoints << "." << std::endl;
	}
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
		std::cout << "DiamondTrap <" << this->name << "> is respawned. ";
	else
		std::cout << "DiamondTrap <" << this->name << "> is repaired. ";
	this->hitPoints += amount;
	std::cout << "The remaining HP is " << this->hitPoints << "." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "##################" << std::endl;
	std::cout << "#    Who am I    #" << std::endl;
	std::cout << "##################" << std::endl;
	std::cout << "diamondTrap name  : " << this->name << std::endl;
	std::cout << "clapTrap name     : " << ClapTrap::name << std::endl;
}