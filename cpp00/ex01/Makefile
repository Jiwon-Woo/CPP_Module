NAME = phonebook
CFLAGS = -Wall -Wextra -Werror
MAIN_C = main.cpp
SOURCE = Contact.cpp PhoneBook.cpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN_C) $(OBJECT)
	clang++ $(MAIN_C) $(CFLAGS) -o $(NAME) $(OBJECT)
$(OBJECT): $(SOURCE)
	clang++ $(CFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	@rm -f $(OBJECT)
fclean:
	@rm -f $(OBJECT) $(NAME)
re:	clean all

.PHONY: all clean fclean re