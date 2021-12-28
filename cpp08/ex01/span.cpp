#include "span.hpp"

const char*	Span::OutOfBoundException::what() const throw()
{
	return "Out of Bound";
}

const char*	Span::NumberTooFewException::what() const throw()
{
	return "Too few numbers";
}

Span::Span() : limit(0)
{
}

Span::Span(unsigned int N) : limit(N)
{
}

Span::Span(const Span &span) : limit(span.getLimit()), store(span.getStore())
{
}

Span& Span::operator=(const Span& span)
{
	this->limit = span.getLimit();
	this->store = span.getStore();
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int num)
{
	if (store.size() >= this->limit)
		throw Span::OutOfBoundException();
	store.push_back(num);
}

void	Span::addRadomNumbers(unsigned int numbers, int begin, int end)
{
	int	range = std::abs(end - begin) + 1;
	for (unsigned int i = 0; i < numbers; i++)
	{
		addNumber(rand() % range + std::min(begin, end));
	}
}

unsigned int	Span::shortestSpan()
{
	if (store.size() <= 1)
		throw Span::NumberTooFewException();

	unsigned int	min(this->longestSpan());
	std::vector<int>	copy(store);

	std::sort(copy.begin(), copy.end());
	for (unsigned int i = 1; i < copy.size(); i++)
	{
		if (static_cast<unsigned int>(copy[i] - copy[i - 1]) < min)
			min = copy[i] - copy[i - 1];
	}
	return min;
}

unsigned int	Span::longestSpan()
{
	if (store.size() <= 1)
		throw Span::NumberTooFewException();

	std::vector<int>	copy(store);
	std::sort(copy.begin(), copy.end());
	return (copy[store.size() - 1] - copy[0]);
}

unsigned int	Span::getLimit() const
{
	return this->limit;
}

std::vector<int>	Span::getStore() const
{
	return this->store;
}

void	Span::showInfo() const
{
	std::cout << ">> Show Info of Store <<" << std::endl;
	std::cout << " > limit : " << this->limit << std::endl;
	std::cout << " > number of store : " << this->store.size() << std::endl;
	std::cout << ">> factor of store <<" << std::endl << " > ";
	for (unsigned int i = 0; i < this->store.size(); i++)
		std::cout << this->store[i] << " ";
	std::cout << std::endl;
}