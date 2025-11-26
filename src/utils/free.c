/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:17:37 by loda-sil          #+#    #+#             */
/*   Updated: 2025/11/26 14:08:14 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void free_tokens(char **tokens)
{
	int i;

	if (!tokens)
		return ;
	i = 0;
	while (tokens[i])
		free(tokens[i++]);
	free(tokens);
}

void free_stack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->a)
		free(stack->a);
	if (stack->b)
		free(stack->b);
	free(stack);
}
