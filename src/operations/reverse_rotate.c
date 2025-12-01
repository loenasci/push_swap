/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:46:34 by loda-sil          #+#    #+#             */
/*   Updated: 2025/12/01 15:50:31 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	reverse_rotate_stack(int *stack, int size)
{
	int	tmp;
	int	i;

	if (size < 2)
		return ;
	tmp = stack[size - 1];
	i = size - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
}

void	rra(t_stack *stack)
{
	reverse_rotate_stack(stack->a, stack->size_a);
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	reverse_rotate_stack(stack->b, stack->size_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	reverse_rotate_stack(stack->a, stack->size_a);
	reverse_rotate_stack(stack->b, stack->size_b);
	ft_printf("rrr\n");
}
