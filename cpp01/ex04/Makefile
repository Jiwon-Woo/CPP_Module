NAME = replace
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
MAIN = main.cpp

$(NAME): $(MAIN)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)

all : $(NAME)
clean:
	rm -rf *.replace
fclean:
	rm -rf $(NAME) *.replace
re:	fclean all

.PHONY: all clean fclean re