NAME = clapTrap
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
MAIN = main.cpp
SOURCE = ClapTrap.cpp
HEADER = ClapTrap.hpp
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