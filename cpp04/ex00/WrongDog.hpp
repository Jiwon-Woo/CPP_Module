#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const WrongDog &wrongDog);
	~WrongDog();
	WrongDog&	operator=(const WrongDog &wrongDog);
	void	makeSound() const;
};

#endif