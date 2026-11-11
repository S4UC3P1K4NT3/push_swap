CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ...
OBJS = $(SOURCES:.c=.o)
NAME = ....

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c ...
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re
