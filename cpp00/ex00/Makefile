NAME = megaphone
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
MAIN = megaphone.cpp

$(NAME): $(MAIN)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)

all : $(NAME)
clean:
	rm -rf $(NAME)
re:	clean all

.PHONY: all clean re