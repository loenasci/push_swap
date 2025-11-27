/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:18:16 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/27 15:57:41 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int get_max_bits(t_stack *stack)
{
	int max_num;
	int bits;

	max_num = stack->size_a - 1;
	bits = 0;
	while (max_num >> bits)
		bits++;
	return (bits);
}

