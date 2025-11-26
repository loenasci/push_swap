/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:46:37 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/26 18:10:39 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void rotate_stack(int *stack, int size)
{
	int tmp;
	int i;

	if (size < 2)
		return ;
	tmp = stack[0];
	i = 0;
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = tmp;
}

void ra(t_stack *stack)
{
	rotate_stack(stack->a, stack->size_a);
	ft_printf("ra\n");
}

void rb(t_stack *stack)
{
	rotate_stack(stack->b, stack->size_b);
	ft_printf("rb\n");
}

void rr(t_stack *stack)
{
	rotate_stack(stack->a, stack->size_a);
	rotate_stack(stack->b, stack->size_b);
	ft_printf("rr\n");
}
