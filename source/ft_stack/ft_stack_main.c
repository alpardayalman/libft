/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:06:39 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/23 12:21:36 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	is_stack_empty(t_Stack *top)
{
	if (top == NULL)
		return (true);
	return (false);
}

void	push(t_Stack **top_ref, int new_data)
{
	t_Stack	*new_node;

	new_node = (t_Stack *)malloc(sizeof(t_Stack));
	if (new_node == NULL)
		exit(0);
	new_node->data = new_data;
	new_node->next = (*top_ref);
	(*top_ref) = new_node;
}

int	peek(t_Stack *top)
{
	return (top->data);
}

int	pop(t_Stack **top_ref)
{
	char	res;
	t_Stack	*top;

	if (*top_ref == NULL)
		exit(0);
	top = *top_ref;
	res = top->data;
	*top_ref = top->next;
	free(top);
	return (res);
}

void	display(t_Stack *top)
{
	while (top != NULL)
	{
		ft_printf(" %d ", top->data);
		top = top->next;
	}
}
