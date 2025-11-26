NAME =  push_swap

HEADERS = include/push_swap.h

SRCS = src/main.c \
		src/init_stack.c \
		src/parsing.c \
		src/validation.c \
		src/utils/free.c \
		src/utils/utils.c \
		src/operations/swap.c \
		src/operations/push.c \
		src/operations/rotate.c \
		src/operations/reverse_rotate.c
OBJS = $(SRCS:src/%.c=obj/%.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -I./include

LIBFT = lib/libft/libft.a
LIBFTPRINTF = lib/ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C lib/libft
	make -C lib/ft_printf
	$(CC) $(OBJS) $(LIBFT) $(LIBFTPRINTF) -o $(NAME)

obj/%.o: src/%.c $(HEADERS)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj
	make clean -C lib/libft
	make clean -C lib/ft_printf

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/libft
	make fclean -C lib/ft_printf

re: fclean all

.PHONY: all clean fclean re
