NAME =  push_swap

HEADERS = include/push_swap.h

SRCS = src/main.c \
		src/push_swap.c \
		src/stack/init_stack.c \
		src/stack/parsing.c \
		src/stack/validation.c \
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
CFLAGS = -Wall -Werror -Wextra -g -I./include -I./libs/ft_printf -I./libs/libft

LIBFT = libs/libft/libft.a
LIBFTPRINTF = libs/ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libs/libft --no-print-directory
	@make -C libs/ft_printf --no-print-directory
	@$(CC) $(OBJS) $(LIBFT) $(LIBFTPRINTF) -o $(NAME)
	@echo "$(NAME) compiled successfully."

obj/%.o: src/%.c $(HEADERS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf obj
	@make clean -C libs/libft --no-print-directory
	@make clean -C libs/ft_printf --no-print-directory

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libs/libft --no-print-directory
	@make fclean -C libs/ft_printf --no-print-directory

re: fclean all

.PHONY: all clean fclean re
