CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = push_swap.c main_utils.c
OBJS = $(SOURCES:.c=.o)
NAME = push_swap 
LIBFT_DIR = libft
FT_PRINTF_DIR = ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

all: $(LIBFT) $(FT_PRINTF) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(FT_PRINTF) $(LIBFT) -o $@ 

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(FT_PRINTF):
	@make -C $(FT_PRINTF_DIR)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@ -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)

clean:
	rm -f $(OBJS) 
	@make -C libft fclean
	@make -C ft_printf fclean

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: fclean clean all re
