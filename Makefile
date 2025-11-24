NAME =  push_swap

HEADERS = include/push_swap.h

SRCS = src/main.c
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
	make -C fclean lib/libft
	make -C fclean lib/ft_printf

re: fclean all

.PHONY: all clean fclean re
