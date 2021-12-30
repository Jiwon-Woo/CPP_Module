#include "iter.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template< typename T >
void print2( T const & x ) { std::cout << x << " "; return; }

template< typename T >
void	add(T const & t)
{
	const_cast<T &>(t)++;
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	char tab1[] = "Hello world!";
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab, 5, add );
	iter( tab, 5, add );
	iter( tab, 5, print2 );
	std::cout << std::endl;

	iter( tab1, 12, print2);
	std::cout << std::endl;
	iter( tab1, 12, add );
	iter( tab1, 12, print2);
	std::cout << std::endl;

	iter( tab2, 5, print );

	return 0;
}