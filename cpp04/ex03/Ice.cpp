#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &ice) : AMateria(ice.getType())
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice &ice)
{
	this->type = ice.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
