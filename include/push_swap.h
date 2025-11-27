/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:05:06 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/27 15:52:48 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "../libs/libft/libft.h"
#include "../libs/ft_printf/ft_printf.h"

typedef struct	s_stack
{
	int *a;
	int *b;
	int size_a;
	int size_b;
	int total;
}	t_stack;

// Initialization
t_stack	*init_stack(int *numbers, int numbers_count);

// Parsing
int		*parse_args(int argc, char **argv, int *numbers_count);

// Validate functions
int		atoi_validate(const char *str, int *result);
int		has_duplicates(int *str, int size);
int		is_sorted(t_stack *stack);

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

#endif
