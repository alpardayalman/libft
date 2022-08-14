/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:06:39 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/15 01:33:22 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	is_stack_empty(Stack_t *top)
{
	if (top == NULL)
		return (true);
	return (false);
}

void	push(Stack_t **top_ref, int new_data)
{
	Stack_t	*new_node;

	new_node = (Stack_t*)malloc(sizeof(Stack_t));
	if(new_node == NULL)
		exit(0);
	new_node->data = new_data;
	new_node->next = (*top_ref);
	(*top_ref) = new_node;
}

int	peek(Stack_t *top)
{
	return (top->data);
}

int	pop(Stack_t **top_ref)
{
	char	res;
	Stack_t	*top;

	if(*top_ref == NULL)
		exit(0);
	top = *top_ref;
	res = top->data;
	*top_ref = top->next;
	free(top);
	return (res);
}

void	display(Stack_t *top)
{
	while (top != NULL)
	{
		ft_printf(" %d ", top->data);
		top = top->next;
	}
}
