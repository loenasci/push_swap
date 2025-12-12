/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:56:15 by loda-sil          #+#    #+#             */
/*   Updated: 2025/12/08 18:27:20 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	*convert_to_int(char **args, int tokens_count, int *numbers_count)
{
	int	*numbers;
	int	i;

	numbers = malloc(sizeof(int) * tokens_count);
	if (!numbers)
		return (NULL);
	i = 0;
	while (i < tokens_count)
	{
		if (!atoi_validate(args[i], &numbers[i]))
		{
			free(numbers);
			return (NULL);
		}
		i++;
	}
	if (has_duplicates(numbers, tokens_count))
	{
		free(numbers);
		return (NULL);
	}
	*numbers_count = tokens_count;
	return (numbers);
}

int	*parse_args(int argc, char **argv, int *numbers_count)
{
	int		*numbers;
	char	**tokens;
	int		tokens_count;

	if (argc < 2)
		return (NULL);
	if (argc == 2)
	{
		tokens = ft_split(argv[1], ' ');
		if (!tokens)
			return (NULL);
		tokens_count = 0;
		while (tokens[tokens_count])
			tokens_count++;
		if (tokens_count == 0)
		{
			free_tokens(tokens);
			return (NULL);
		}
		numbers = convert_to_int(tokens, tokens_count, numbers_count);
		free_tokens(tokens);
	}
	else
		numbers = convert_to_int(&argv[1], argc - 1, numbers_count);
	return (numbers);
}
