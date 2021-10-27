NAME = megaphone
CFLAGS = -Wall -Wextra -Werror
MAIN = megaphone.cpp

$(NAME): $(MAIN)
	clang++ $(MAIN) $(CFLAGS) -o $(NAME)

all : $(NAME)
clean:
	@rm -f $(NAME)
re:	clean all

.PHONY: all clean re