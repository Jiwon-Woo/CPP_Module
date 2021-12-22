#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource & materiaSource)
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource.inventory[i])
			inventory[i] = materiaSource.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource & materiaSource)
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource.inventory[i])
			inventory[i] = materiaSource.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] && inventory[i]->getType() == type)
			return inventory[i]->clone();
	}
	return 0;
}
