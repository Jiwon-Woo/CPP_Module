#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	inventory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource & materiaSource);
	MateriaSource& operator=(const MateriaSource & materiaSource);
	~MateriaSource();
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif