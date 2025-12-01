/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:18:16 by loda-sil          #+#    #+#             */
/*   Updated: 2025/12/01 15:50:31 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	get_max_bits(t_stack *stack)
{
	int	max_num;
	int	bits;

	max_num = stack->size_a - 1;
	bits = 0;
	while (max_num >> bits)
		bits++;
	return (bits);
}

void	radix_sort(t_stack *stack)
{
	int	max_bits;
	int	bit;
	int	size;
	int	i;

	max_bits = get_max_bits(stack);
	bit = 0;
	while (bit < max_bits)
	{
		size = stack->size_a;
		i = 0;
		while (i < size)
		{
			if ((stack->a[0] >> bit) & 1)
				ra(stack);
			else
				pb(stack);
			i++;
		}
		while (stack->size_b > 0)
			pa(stack);
		bit++;
	}
}
