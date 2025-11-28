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
		src/operations/reverse_rotate.c \
		src/algorithms/normalize.c \
		src/algorithms/radix_sort.c \
		src/algorithms/simple_sort.c
OBJS = $(SRCS:src/%.c=obj/%.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -I./include

LIBFT = libs/libft/libft.a
LIBFTPRINTF = libs/ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C libs/libft
	make -C libs/ft_printf
	$(CC) $(OBJS) $(LIBFT) $(LIBFTPRINTF) -o $(NAME)

obj/%.o: src/%.c $(HEADERS)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj
	make clean -C libs/libft
	make clean -C libs/ft_printf

fclean: clean
	rm -f $(NAME)
	make fclean -C libs/libft
	make fclean -C libs/ft_printf

re: fclean all

.PHONY: all clean fclean re
