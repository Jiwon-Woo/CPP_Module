NAME = templates
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
MAIN = main.cpp
HEADER = whatever.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(HEADER)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)
$(OBJECT): $(SOURCE) $(HEADER)
	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	$(RM) $(NAME)
re:	fclean all

.PHONY: all clean fclean re