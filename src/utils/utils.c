/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:06:58 by loda-sil          #+#    #+#             */
/*   Updated: 2025/12/01 15:50:31 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	skip_whitespace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (1);
}

int	find_max_index(t_stack *stack)
{
	int	i;
	int	max_i;

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

int	find_min_index(t_stack *stack)
{
	int	i;
	int	min_i;

	i = 0;
	min_i = 0;
	while (i < stack->size_a)
	{
		if (stack->a[i] < stack->a[min_i])
			min_i = i;
		i++;
	}
	return (min_i);
}
