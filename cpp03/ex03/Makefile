NAME = diamondTrap
CXX = clang++
CXXFLAGS = -std=c++98 -Wshadow -Wno-shadow -Wall -Wextra -Werror
RM = rm -rf
MAIN = main.cpp
SOURCE = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(OBJECT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJECT)
$(OBJECT): $(SOURCE) $(HEADER)
	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	$(RM) $(OBJECT)
fclean:
	$(RM) $(OBJECT) $(NAME)
re:	fclean all

.PHONY: all clean fclean re