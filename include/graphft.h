/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:04:44 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/23 12:26:00 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHFT_H
# define GRAPHFT_H
# include "libft.h"

typedef struct s_Graph_Node
{
	int					a;
	struct s_Graph_Node	*next;
}	t_Graph_Node;

typedef struct s_Graph
{
	int					numvertices;
	struct s_Graph_Node	**adjlist;
}	t_Graph;

t_Graph			*graph_node_init(int vertex);
t_Graph_Node	*create_graph_node(int vertex);
void			graph_add(t_Graph *graph, int src, int dest);
void			print_graph(t_Graph *graph);
#endif