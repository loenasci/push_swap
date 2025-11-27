/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:45:43 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/27 15:54:42 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int *sort_array(int *sorted, int size)
{
	int tmp;
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (sorted[j] > sorted[j + 1])
			{
				tmp = sorted[j];
				sorted[j] = sorted[j + 1];
				sorted[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (sorted);
}


static void copy_array(int *stack, int *sorted, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		sorted[i] = stack[i];
		i++;
	}
}

static void index_values(t_stack *stack, int *sorted)
{
	int i;
	int j;

	i = 0;
	while (i < stack->size_a)
	{
		j = 0;
		while (j < stack->size_a)
		{
			if(stack->a[i] == sorted[j])
			{
				stack->a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void normalize_stack(t_stack *stack)
{
	int *sorted;

	sorted = malloc(sizeof(int) * stack->size_a);
	copy_array(stack->a, sorted, stack->size_a);
	sort_array(sorted, stack->size_a);
	index_values(stack, sorted);
	free(sorted);
}
