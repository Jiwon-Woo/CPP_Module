NAME = zombies
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
MAIN = main.cpp
SOURCE = Zombie.cpp ZombieHorde.cpp
HEADER = Zombie.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(OBJECT) $(HEADER)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJECT)
$(OBJECT): $(SOURCE)
	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	rm -rf $(OBJECT)
fclean:
	rm -rf $(OBJECT) $(NAME)
re:	fclean all

.PHONY: all clean fclean re