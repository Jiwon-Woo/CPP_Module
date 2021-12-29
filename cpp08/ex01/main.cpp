#include "span.hpp"

int main()
{
	srand(time(NULL));
	Span sp = Span(20);

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

	std::cout << std::endl;
	sp.showInfo();
	std::cout << std::endl;

	std::vector<int>	v(5, 10);

	sp.addNumber(std::begin(v), std::end(v));
	std::cout << std::endl;
	sp.showInfo();
	std::cout << std::endl;

	int	a[5] = { 1, 2, 3, 4, 5 };
	sp.addNumber(a, a + 5);

	std::cout << std::endl;
	sp.showInfo();
	std::cout << std::endl;

	try
	{
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << e.what() << "\n\n";
	}
	return 0;
}