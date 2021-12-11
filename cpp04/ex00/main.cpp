#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << "################" << std::endl;
		std::cout << "# Animal Class #" << std::endl;
		std::cout << "################" << std::endl;
		std::cout << std::endl;

		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << std::endl;
		std::cout << "animal->getType() : " << animal->getType() << " " << std::endl;
		std::cout << "dog->getType() : " << dog->getType() << " " << std::endl;
		std::cout << "cat->getType() : " << cat->getType() << " " << std::endl;

		std::cout << std::endl;
		std::cout << "animal->makeSound() : ";
		animal->makeSound();
		std::cout << "dog->makeSound() : ";
		dog->makeSound();	//will output the dog sound!
		std::cout << "cat->makeSound() : ";
		cat->makeSound();	//will output the cat sound!
		std::cout << std::endl;

		delete cat;
		delete dog;
		delete animal;
		std::cout << std::endl;
	}

	{
		std::cout << std::endl;
		std::cout << "######################" << std::endl;
		std::cout << "# Wrong Animal Class #" << std::endl;
		std::cout << "######################" << std::endl;
		std::cout << std::endl;

		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongDog = new WrongDog();
		const WrongAnimal* wrongCat = new WrongCat();

		std::cout << std::endl;
		std::cout << "wrongAnimal->getType() : " << wrongAnimal->getType() << " " << std::endl;
		std::cout << "wrongDog->getType() : " << wrongDog->getType() << " " << std::endl;
		std::cout << "wrongCat->getType() : " << wrongCat->getType() << " " << std::endl;

		std::cout << std::endl;
		std::cout << "wrongAnimal->makeSound() : ";
		wrongAnimal->makeSound();
		std::cout << "wrongDog->makeSound() : ";
		wrongDog->makeSound();	//will output the wrongDog sound!
		std::cout << "wrongCat->makeSound() : ";
		wrongCat->makeSound();	//will output the wrongCat sound!
		std::cout << std::endl;

		delete wrongCat;
		delete wrongDog;
		delete wrongAnimal;
		std::cout << std::endl;
	}
}