#include "identify.hpp"

Base*	generate(void)
{
	int random = rand() % 3;

	std::cout << "generate ";
	if (random == A_INDEX)
	{
		std::cout << "A";
		return new A();
	}
	else if (random == B_INDEX)
	{
		std::cout << "B";
		return new B();
	}
	else if (random == C_INDEX)
	{
		std::cout << "C";
		return new C();
	}
	else
	{
		std::cout << "unknown";
		return NULL;
	}
}

void	identify(Base* p)
{
	std::cout << "The real type of Base* is ";
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "unknown";
}

void	identify(Base& p)
{
	std::cout << "The real type of Base& is ";
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << a;
	}
	catch(const std::exception& e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << b;
		}
		catch(const std::exception& e)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				std::cout << c;
			}
			catch(const std::exception& e)
			{
				std::cout << "unknown";
			}
		}
	}
}