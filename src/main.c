/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:50:20 by loda-sil          #+#    #+#             */
/*   Updated: 2025/12/01 15:51:07 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char *argv[])
{
	int	*numbers;
	int	numbers_count;

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
	return (push_swap(numbers, numbers_count));
}
