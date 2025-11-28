/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:50:20 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/28 16:37:59 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char *argv[])
{
	t_stack *stack;
	int *numbers;
	int numbers_count;

	if (argc < 2)
		return (0);
	numbers = parse_args(argc, argv, &numbers_count);
	if (!numbers)
		return (ft_error());
	if (has_duplicates(numbers, numbers_count))
	{
		free(numbers);
		return (ft_error());
	}
	stack = init_stack(numbers, numbers_count);
	if (!stack)
	{
		free(numbers);
		return (ft_error());
	}
	if (is_sorted(stack))
	{
		free_stack(stack);
		return (0);
	}
	if (stack->size_a == 2)
		sort_two(stack);
	else if (stack->size_a == 3)
		sort_three(stack);
	else
	{
		normalize_stack(stack);
		radix_sort(stack);
	}
	free_stack(stack);
	return (0);
}

