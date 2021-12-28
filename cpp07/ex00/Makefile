NAME = templates
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
MAIN = main.cpp
HEADER = whatever.hpp

$(NAME): $(MAIN) $(HEADER)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)

all : $(NAME)
clean:
	$(RM) $(NAME)
re:	clean all

.PHONY: all clean fclean re