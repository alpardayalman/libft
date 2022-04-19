/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:04:58 by ardayalman        #+#    #+#             */
/*   Updated: 2022/04/19 14:52:53 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_line(char *remainder)
{
	int		index;
	char	*string;

	index = 0;
	if (!remainder[index])
		return (NULL);
	while (remainder[index] && remainder[index] != '\n')
		index++;
	string = (char *)malloc(sizeof(char) * (index + 2));
	if (!string)
		return (NULL);
	index = 0;
	while (remainder[index] && remainder[index] != '\n')
	{
		string[index] = remainder[index];
		index++;
	}
	if (remainder[index] == '\n')
	{
		string[index] = remainder[index];
		index++;
	}
	string[index] = '\0';
	return (string);
}

char	*ft_new_left_str(char *remainder)
{
	int		index;
	int		index_2;
	char	*string;

	index = 0;
	while (remainder[index] && remainder[index] != '\n')
		index++;
	if (!remainder[index])
	{
		free(remainder);
		return (NULL);
	}
	string = (char *)malloc(sizeof(char) * (ft_strlen(remainder) - index + 1));
	if (!string)
		return (NULL);
	index++;
	index_2 = 0;
	while (remainder[index])
		string[index_2++] = remainder[index++];
	string[index_2] = '\0';
	free(remainder);
	return (string);
}

char	*ft_read_to_left_str(int fd, char *remainder)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(remainder, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		remainder = ft_strjoin(remainder, buff);
	}
	free(buff);
	return (remainder);
}

char	*get_next_line(int fd)
{
	char		*string;
	static char	*remainder;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	remainder = ft_read_to_left_str(fd, remainder);
	if (!remainder)
		return (NULL);
	string = ft_get_line(remainder);
	remainder = ft_new_left_str(remainder);
	return (string);
}
//fd = file descriptor
//main function
// int	main()
// {
// 	int fd = open("test", O_RDONLY);
// 	int resfd = open("result", O_RDWR);
//  	char  *string;

// 	for (int index = 0; index < 10; index++) {
//   		string = get_next_line(fd);
//  		write(resfd, string, ft_strlen(string));
// 	}
// }