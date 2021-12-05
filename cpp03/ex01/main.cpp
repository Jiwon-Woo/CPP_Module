#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");
	ClapTrap	c("c");

	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	b.attack("c");
	c.takeDamage(b.getAttackDamage());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	c.attack("b");
	b.takeDamage(c.getAttackDamage());
	
	std::cout << std::endl;
	
	a.attack("c");
	c.takeDamage(a.getAttackDamage());
	c.attack("a");
	a.takeDamage(c.getAttackDamage());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	
	std::cout << std::endl;
	
	b.guardGate();
	
	std::cout << std::endl;
	return (0);
}