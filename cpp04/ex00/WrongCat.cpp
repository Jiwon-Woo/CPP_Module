#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default WrongCat created" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat)
{
	std::cout << "Copy WrongCat created" << std::endl;
	*(this) = wrongCat;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &wrongCat)
{
	std::cout << "Assignation operator of WrongCat" << std::endl;
	this->type = wrongCat.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "This is WrongCat." << std::endl;
}
