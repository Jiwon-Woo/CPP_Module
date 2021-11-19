#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

# define C_NRML "\033[0m"
# define C_BLCK "\033[30m"
# define C_RED  "\033[31m"
# define C_GREN "\033[32m"
# define C_YLLW "\033[33m"
# define C_BLUE "\033[34m"
# define C_PRPL "\033[35m"
# define C_AQUA "\033[36m"

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3
# define TOTAL_NUM_OF_LEVEL 4

class Karen;

typedef struct s_complain
{
	std::string	level;
	void (Karen::*func_ptr)(void);
} t_complain;

class Karen {

private:
	t_complain	complain_list[TOTAL_NUM_OF_LEVEL];
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