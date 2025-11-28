/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:44:11 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/28 16:32:52 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int find_max_index(t_stack *stack)
{
	int i;
	int max_i;

	i = 0;
	max_i = 0;
	while (i < stack->size_a)
	{
		if (stack->a[i] > stack->a[max_i])
			max_i = i;
		i++;
	}
	return (max_i);
}

void sort_two(t_stack *stack)
{
	if(stack->a[0] > stack->a[1])
		sa(stack);
}

void sort_three(t_stack *stack)
{
	int max_index;

	max_index = find_max_index(stack);
	if (max_index == 0)
		ra(stack);
	else if (max_index == 1)
		rra(stack);
	if (stack->a[0] > stack->a[1])
		sa(stack);
}
