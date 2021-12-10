#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog* j = new Dog();
	Cat* i = new Cat();

	// j->getBrain().addIdea("hi");
	// std::cout << j->getBrain().getIdea()->size() << std::endl;
	j->addIdea(std::string("hello"));
	j->addIdea("good");

	std::cout << std::endl;
	j->getBrain().showIdea();
	std::cout << std::endl;

	Dog z = Dog();

	*j = z;
	Dog y = Dog(z);

	j->getBrain().showIdea();
	y.getBrain().showIdea();

	z.addIdea("what");

	j->getBrain().showIdea();
	y.getBrain().showIdea();
	z.getBrain().showIdea();

	delete j;//should not create a leak
	delete i;
	while (1);
}