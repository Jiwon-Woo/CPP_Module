#include "Karen.hpp"

int	main()
{
	Karen karen = Karen();

	karen.complain("debug");
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
}