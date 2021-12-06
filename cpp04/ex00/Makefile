NAME = polymorphism
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
MAIN = main.cpp
SOURCE = Animal.cpp Dog.cpp Cat.cpp
HEADER = Animal.hpp Dog.hpp Cat.hpp
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