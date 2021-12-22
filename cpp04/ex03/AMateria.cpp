#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria &aMateria) : type(aMateria.getType())
{
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria &aMateria)
{
	this->type = aMateria.getType();
	return *this;
}

std::string const & AMateria::getType() const	//Returns the materia type
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* " << target.getName() << " *" << std::endl;
}
