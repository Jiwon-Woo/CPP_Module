NAME = form
CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
MAIN = main.cpp
SOURCE = Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
HEADER = Bureaucrat.hpp	Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(OBJECT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJECT)
$(OBJECT): $(SOURCE) $(HEADER)
	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	$(RM) $(OBJECT) $(addsuffix _shrubbery, *)
fclean:
	$(RM) $(OBJECT) $(addsuffix _shrubbery, *) $(NAME)
re:	fclean all

.PHONY: all clean fclean re