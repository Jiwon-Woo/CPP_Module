NAME = phonebook
CFLAGS = -Wall -Wextra -Werror
MAIN = main.cpp
HEADER = main.hpp

$(NAME): $(MAIN) $(HEADER)
	clang++ $(MAIN) $(CFLAGS) -o $(NAME)

all : $(NAME)
clean:
	@rm -f $(NAME)
re:	clean all

.PHONY: all clean re