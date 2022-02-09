/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:27:43 by ayalman           #+#    #+#             */
/*   Updated: 2022/02/09 20:22:22 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

static int	ft_partition(int *array, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = array[high];
	i = (low - 1);
	j = low;
	while (j < high)
	{
		if (array[j] <= pivot)
		{
			i++;
			ft_swap(&array[i], &array[j]);
		}
		j++;
	}
	ft_swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void	ft_quick(int *array, int low, int high)
{
	int	pi;

	pi = 0;
	if (low < high)
	{
		pi = ft_partition(array, low, high);
		ft_quick(array, low, pi - 1);
		ft_quick(array, pi + 1, high);
	}
}
