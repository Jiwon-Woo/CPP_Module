NAME = brain
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
MAIN = main.cpp

$(NAME): $(MAIN)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)

all : $(NAME)
clean:
	rm -rf $(NAME)
re:	clean all

.PHONY: all clean re