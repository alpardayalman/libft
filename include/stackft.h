/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:02:50 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/15 00:33:18 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKFT_H
# define STACKFT_H

# include "libft.h"

typedef struct Stack_s
{
	int				data;
	struct Stack_s	*next;
} Stack_t;

void	display(Stack_t *pt);
int		pop(Stack_t **pt);
int		peek(Stack_t *pt);
void	push(Stack_t **pt, int num);
bool	is_stack_empty(Stack_t *pt);

#endif