/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:05:06 by loda-sil          #+#    #+#             */
/*   Updated: 2025/12/01 16:14:46 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <libft.h>
# include <ft_printf.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
	int	total;
}	t_stack;

// Push Swap
int		push_swap(int *numbers, int numbers_count);

// Initialization
t_stack	*init_stack(int *numbers, int numbers_count);

// Parsing
int		*parse_args(int argc, char **argv, int *numbers_count);

// Validate functions
int		atoi_validate(const char *str, int *result);
int		has_duplicates(int *str, int size);
int		is_sorted(t_stack *stack);

// Algorithm
void	normalize_stack(t_stack *stack);
void	radix_sort(t_stack *stack);
void	simple_sort(t_stack *stack);

// Operations
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

// Free
void	free_tokens(char **tokens);
void	free_stack(t_stack *stack);

// Utils
int		skip_whitespace(const char *str);
int		ft_error(void);
int		find_max_index(t_stack *stack);
int		find_min_index(t_stack *stack);

#endif
