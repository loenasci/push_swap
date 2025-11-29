/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loena <loena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:42:27 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/29 19:38:50 by loena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int atoi_validate(const char *str, int *result)
{
	long int nbr;
	int sign;
	size_t i;

	i = skip_whitespace(str);
	sign = 1;
	nbr = 0;
	if (!str || !*str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	if (!ft_isdigit(str[i]))
		return (0);
	while (ft_isdigit(str[i]))
		nbr = nbr * 10 + (str[i++] - 48);
	if (str[i] != '\0')
		return (0);
	nbr *= sign;
	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	*result = (int)nbr;
	return (1);
}

int has_duplicates(int *str, int numbers_count)
{
	int i;
	int j;

	i = 0;
	while (i < numbers_count)
	{
		j = i + 1;
		while (j < numbers_count)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int is_sorted(t_stack *stack)
{
	int i;

	if (!stack || stack->size_b > 0)
		return (0);
	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->a[i] > stack->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
