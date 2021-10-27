NAME = megaphone
# LIB = libpushswap.a
CFLAGS = -Wall -Wextra -Werror
# LFLAG = -L. -lpushswap
# SOURCE = megaphone.cpp
# OBJECT = $(SOURCE:.c=.o)
MAIN = megaphone.cpp

$(NAME): $(MAIN)
	clang++ $(MAIN) $(CFLAGS) -o $(NAME)
# $(LIB): $(OBJECT)
# 	ar rcs $(LIB) $(OBJECT)
# $(OBJECT): $(SOURCE)
# 	gcc $(CFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	@rm -f $(NAME)
re:	clean all

.PHONY: all clean re