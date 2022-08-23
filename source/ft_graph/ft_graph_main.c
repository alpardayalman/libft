/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 01:17:39 by ardayalman        #+#    #+#             */
/*   Updated: 2022/08/23 12:25:31 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_Graph	*graph_node_init(int vertex)
{
	t_Graph	*graph;
	int		i;

	graph = malloc(sizeof(t_Graph));
	i = 0;
	graph->numvertices = vertex;
	graph->adjlist = (t_Graph_Node **)malloc(sizeof(t_Graph_Node *) * vertex);
	while (i < vertex)
	{
		graph->adjlist[i] = NULL;
		i++;
	}
	return (graph);
}

t_Graph_Node	*create_graph_node(int vertex)
{
	t_Graph_Node	*ret;

	ret = malloc(sizeof(t_Graph_Node));
	ret->a = vertex;
	ret->next = NULL;
	return (ret);
}

void	graph_add(t_Graph *graph, int src, int dest)
{
	t_Graph_Node	*a;

	a = create_graph_node(src);
	a->next = graph->adjlist[dest];
	graph->adjlist[dest] = a;
	a = create_graph_node(dest);
	a->next = graph->adjlist[src];
	graph->adjlist[src] = a;
}

void	print_graph(t_Graph *graph)
{
	int				v;
	t_Graph_Node	*temp;

	v = 0;
	while (v < graph->numvertices)
	{
		temp = graph->adjlist[v];
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
