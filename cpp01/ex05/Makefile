NAME = karen2.0
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
MAIN = main.cpp
SOURCE = Karen.cpp
HEADER = Karen.hpp
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