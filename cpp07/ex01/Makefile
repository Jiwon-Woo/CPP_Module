NAME = iter
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
MAIN = main.cpp
HEADER = iter.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(HEADER)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)
$(OBJECT): $(SOURCE) $(HEADER)
	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	$(RM) $(NAME)
re:	clean all

.PHONY: all clean fclean re