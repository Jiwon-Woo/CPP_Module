NAME = zombie
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
MAIN = main.cpp
SOURCE = Zombie.cpp newZombie.cpp randomChump.cpp
HEADER = Zombie.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(OBJECT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJECT)
$(OBJECT): $(SOURCE) $(HEADER)
	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	rm -rf $(OBJECT)
fclean:
	rm -rf $(OBJECT) $(NAME)
re:	fclean all

.PHONY: all clean fclean re