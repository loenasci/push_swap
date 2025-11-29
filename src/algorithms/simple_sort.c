/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loena <loena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:44:11 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/29 19:30:58 by loena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void sort_two(t_stack *stack)
{
	if(stack->a[0] > stack->a[1])
		sa(stack);
}

static void sort_three(t_stack *stack)
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

static void sort_four(t_stack *stack)
{
	int min_index;

	min_index = find_min_index(stack);
	if (min_index == 1)
		sa(stack);
	else if (min_index == 2)
	{
		rra(stack);
		rra(stack);
	}
	else if (min_index == 3)
		rra(stack);
	pb(stack);
	sort_three(stack);
	pa(stack);
}

static void sort_five(t_stack *stack)
{
	int min_index;

	min_index = find_min_index(stack);
	if (min_index <= 2)
		while (min_index-- > 0)
			ra(stack);
	else
		while (min_index++ < 5)
			rra(stack);
	pb(stack);
	min_index = find_min_index(stack);
	if (min_index <= 1)
		while (min_index-- > 0)
			ra(stack);
	else
		while (min_index++ < 4)
			rra(stack);
	pb(stack);
	sort_three(stack);
	pa(stack);
	pa(stack);
}

void	simple_sort(t_stack *stack)
{
	if (stack->size_a == 2)
		sort_two(stack);
	else if (stack->size_a == 3)
		sort_three(stack);
	else if (stack->size_a == 4)
		sort_four(stack);
	else if (stack->size_a == 5)
		sort_five(stack);
}
