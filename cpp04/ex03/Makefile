NAME = interface
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf
MAIN = main.cpp
SOURCE = AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp
HEADER = AMateria.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp Ice.hpp Cure.hpp
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