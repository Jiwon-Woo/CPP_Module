#include "span.hpp"

int main()
{
	Span sp = Span(10);

	std::cout << std::endl;
	sp.showInfo();
	std::cout << std::endl;

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << std::endl;
	sp.showInfo();
	std::cout << std::endl;

	std::cout << "shortestSpan() : " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan()  : " << sp.longestSpan() << std::endl;

	sp.addNumber(1);
	sp.addNumber(3);
	sp.addNumber(21);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << std::endl;
	sp.showInfo();
	std::cout << std::endl;

	std::cout << "shortestSpan() : " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan()  : " << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << e.what() << '\n';
	}

	std::cout << std::endl;
	sp.showInfo();
	std::cout << std::endl;

	return 0;
}