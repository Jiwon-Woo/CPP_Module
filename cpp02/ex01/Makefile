NAME = fixed
CXX = clang++
CXXFLAGS = -std=c++98
RM = rm -rf
MAIN = main.cpp
SOURCE = Fixed.cpp
HEADER = Fixed.hpp
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