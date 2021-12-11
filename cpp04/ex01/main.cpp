#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define ANIMAL_NUM 4
# define DOG_INDEX 0
# define CAT_INDEX 1

# define C_NRML "\033[0m"
# define C_YLLW "\033[33m"
# define C_RED  "\033[31m"

int main()
{
	{
		std::cout << std::endl;
		std::cout << "###############" << std::endl;
		std::cout << "# check leaks #" << std::endl;
		std::cout << "###############" << std::endl;
		std::cout << std::endl;

		const Animal* j = new Dog();
		std::cout << std::endl;

		const Animal* i = new Cat();
		std::cout << std::endl;

		delete j;//should not create a leak
		std::cout << std::endl;
		delete i;
		std::cout << std::endl << std::endl;
	}

	{
		std::cout << std::endl;
		std::cout << "###########################" << std::endl;
		std::cout << "# UpCasting & DownCasting #" << std::endl;
		std::cout << "###########################" << std::endl;
		std::cout << std::endl;

		std::cout << C_RED << "Create and Fill an Array of Animal" << C_NRML << std::endl;
		Animal*	animals[ANIMAL_NUM];

		for (int i = 0; i < ANIMAL_NUM; i++)
		{
			if (i % 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
			std::cout << std::endl;
		}
		std::cout << std::endl;

		std::cout << C_YLLW << "((Dog *)animals[DOG_INDEX])->addIdea(2)" << C_NRML << std::endl;
		((Dog *)animals[DOG_INDEX])->addIdea("hello");
		((Dog *)animals[DOG_INDEX])->addIdea("good");
		std::cout << std::endl;


		std::cout << C_YLLW << "((Dog *)animals[DOG_INDEX])->showIdea()" << C_NRML << std::endl;
		((Dog *)animals[DOG_INDEX])->showIdea();
		std::cout << std::endl;

		std::cout << C_YLLW << "Dog dog = *animals[DOG_INDEX]" << C_NRML << std::endl;
		Dog dog = *((Dog *)animals[DOG_INDEX]);
		std::cout << std::endl;

		std::cout << C_YLLW << "Cat cat = Cat(*((Cat *)animals[CAT_INDEX]))" << C_NRML << std::endl;
		Cat cat = Cat(*((Cat *)animals[CAT_INDEX]));
		std::cout << std::endl;

		std::cout << C_YLLW << "dog.showIdea()" << C_NRML << std::endl;
		dog.showIdea();
		std::cout << std::endl;

		std::cout << C_YLLW << "cat.showIdea()" << C_NRML << std::endl;
		cat.showIdea();
		std::cout << std::endl;

		std::cout << C_YLLW << "dog.addIdea(what)" << C_NRML << std::endl;
		dog.addIdea("what");
		std::cout << std::endl;

		std::cout << C_YLLW << "((Dog *)animals[DOG_INDEX])->showIdea()" << C_NRML << std::endl;
		((Dog *)animals[DOG_INDEX])->showIdea();
		std::cout << std::endl;

		std::cout << C_YLLW << "dog.showIdea()" << C_NRML << std::endl;
		dog.showIdea();
		std::cout << std::endl;

		std::cout << C_YLLW << "((Cat *)animals[CAT_INDEX])->addIdea(nothing)" << C_NRML << std::endl;
		((Cat *)animals[CAT_INDEX])->addIdea("nothing");
		std::cout << std::endl;

		std::cout << C_YLLW << "cat.addIdea(something)" << C_NRML << std::endl;
		cat.addIdea("something");
		std::cout << std::endl;

		std::cout << C_YLLW << "((Cat *)animals[CAT_INDEX])->showIdea()" << C_NRML << std::endl;
		((Cat *)animals[CAT_INDEX])->showIdea();
		std::cout << std::endl;

		std::cout << C_YLLW << "cat.showIdea()" << C_NRML << std::endl;
		cat.showIdea();
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << C_RED << "Destroy an Array of Animal" << C_NRML << std::endl;
		for (int i = 0; i < ANIMAL_NUM; i++)
		{
			delete animals[i];
			std::cout << std::endl;
		}
		std::cout << C_RED << "Destroy Cat and Dog" << C_NRML << std::endl;
	}
	while (1);
}