/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:06:28 by ayalman           #+#    #+#             */
/*   Updated: 2022/01/31 23:06:45 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	sum;
	int	index;
	int	sign;

	sign = 1;
	index = 0;
	sum = 0;
	while (s[index] == 32 || (s[index] >= 9 && s[index] <= 13))
		index++;
	if (s[index] == '-' || s[index] == '+')
	{
		if (s[index] == '-')
			sign = -1;
		index++;
	}
	while (s[index] >= '0' && s[index] <= '9')
	{
		sum *= 10;
		sum += s[index] - '0';
		index++;
	}
	return (sum * sign);
}
