#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("A");

	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
	a.guardGate();
	a.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;

	DiamondTrap b("B");
	DiamondTrap c("C");

	std::cout << std::endl;
	b.whoAmI();
	std::cout << std::endl;
	c.whoAmI();
	std::cout << std::endl;
	
	b.attack("C");
	c.takeDamage(b.getAttackDamage());
	
	std::cout << std::endl;
	
	c.attack("C");
	b.takeDamage(c.getAttackDamage());
	
	std::cout << std::endl;
	std::cout << std::endl;


	DiamondTrap d;
	
	std::cout << std::endl;
	d.whoAmI();
	std::cout << std::endl;
	d.guardGate();
	d.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;

	d = a;
	d.whoAmI();
	std::cout << std::endl;
	d.guardGate();
	d.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}