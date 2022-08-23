/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:02:50 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/23 12:19:10 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKFT_H
# define STACKFT_H

# include "libft.h"

typedef struct s_Stack
{
	int				data;
	struct s_Stack	*next;
}	t_Stack;

void	display(t_Stack *pt);
int		pop(t_Stack **pt);
int		peek(t_Stack *pt);
void	push(t_Stack **pt, int num);
bool	is_stack_empty(t_Stack *pt);

#endif