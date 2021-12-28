#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
private:
	unsigned int	limit;
	std::vector<int>	store;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &span);
	Span& operator=(const Span& span);
	~Span();
	void	addNumber(int num);
	void	addRadomNumbers(unsigned int numbers, int begin, int end);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	unsigned int	getLimit() const;
	std::vector<int>	getStore() const;
	void	showInfo() const;
	class	OutOfBoundException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class	NumberTooFewException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif