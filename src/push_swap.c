/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:18:51 by loena             #+#    #+#             */
/*   Updated: 2025/12/01 15:51:07 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	push_swap(int *numbers, int numbers_count)
{
	t_stack	*stack;

	stack = init_stack(numbers, numbers_count);
	if (!stack)
	{
		free(numbers);
		return (ft_error());
	}
	if (!is_sorted(stack))
	{
		if (stack->size_a <= 5)
			simple_sort(stack);
		else
		{
			normalize_stack(stack);
			radix_sort(stack);
		}
	}
	free(numbers);
	free_stack(stack);
	return (0);
}
