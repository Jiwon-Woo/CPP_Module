#include "Character.hpp"

Character::Character() : name("")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(const Character & character) : name(character.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (character.inventory[i])
			inventory[i] = character.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
}

Character& Character::operator=(const Character & character)
{
	this->name = character.getName();
	for (int i = 0; i < 4; i++)
	{
		if (character.inventory[i])
			inventory[i] = character.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && inventory[i])
		{
			while (i < 3)
			{
				inventory[i] = inventory[i + 1];
				i++;
			}
			inventory[i] = 0;
			break;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && inventory[i])
		{
			inventory[i]->use(target);
			break;
		}
	}
}