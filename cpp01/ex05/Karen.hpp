#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen;

typedef struct s_complain
{
	std::string	level;
	void (Karen::*func_ptr)(void);
} t_complain;

class Karen {

private:
	t_complain	complain_list[4];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Karen( void );
	void complain( std::string level );
	~Karen( void );

};

#endif