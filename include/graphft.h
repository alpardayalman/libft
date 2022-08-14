/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:04:44 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/15 01:32:57 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHFT_H
# define GRAPHFT_H
# include "libft.h"

typedef struct Graph_Node_s
{
	int					a;
	struct Graph_Node_s	*next;
} Graph_Node_t;

typedef struct Graph_s
{
	int					numVertices;
	struct Graph_Node_s	**adjList;
} Graph_t;

Graph_t			*graph_node_init(int vertex);
Graph_Node_t	*create_graph_node(int vertex);
void			graph_add(Graph_t *graph, int src, int dest);
void			print_graph(Graph_t *graph);
#endif