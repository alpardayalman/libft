/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 01:17:39 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/15 01:33:16 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Graph_t	*graph_node_init(int vertex)
{
	Graph_t	*graph;
	int		i;

	graph = malloc(sizeof(Graph_t));
	i = 0;
	graph->numVertices = vertex;
	graph->adjList = (Graph_Node_t **)malloc(sizeof(Graph_Node_t *) * vertex);
	while (i < vertex)
	{
		graph->adjList[i] = NULL;
		i++;
	}
	return (graph);
}

Graph_Node_t	*create_graph_node(int vertex)
{
	Graph_Node_t	*ret;

	ret = malloc(sizeof(Graph_Node_t));
	ret->a = vertex;
	ret->next = NULL;
	return (ret);
}

void	graph_add(Graph_t *graph, int src, int dest)
{
	Graph_Node_t	*a;

	a = create_graph_node(src);
	a->next = graph->adjList[dest];
	graph->adjList[dest] = a;

	a = create_graph_node(dest);
	a->next = graph->adjList[src];
	graph->adjList[src] = a;
}

void	print_graph(Graph_t *graph)
{
	int				v;
	Graph_Node_t	*temp;

	v = 0;
	while (v < graph->numVertices)
	{
		temp = graph->adjList[v];
		ft_printf("\n Vertex %d: ", v);
		while (temp)
		{
			ft_printf("%d -> ", temp->a);
			temp = temp->next;
		}
		ft_printf("\n");
		v++;
	}
}
