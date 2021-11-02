NAME = replace
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
MAIN = main.cpp
# SOURCE = Weapon.cpp HumanA.cpp HumanB.cpp
# OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(OBJECT)
	# $(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJECT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)
# $(OBJECT): $(SOURCE)
# 	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	rm -rf $(OBJECT)
fclean:
	rm -rf $(OBJECT) $(NAME) *.replace
re:	fclean all

.PHONY: all clean fclean re