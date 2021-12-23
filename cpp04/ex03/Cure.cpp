#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &cure) : AMateria(cure.getType())
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure &cure)
{
	this->type = cure.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
