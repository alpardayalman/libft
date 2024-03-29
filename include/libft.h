/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:05:52 by ayalman           #+#    #+#             */
/*   Updated: 2022/08/23 12:23:26 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdarg.h>
# include <limits.h>
# include <fcntl.h>
# include <signal.h>

# include "graphft.h"
# include "queueft.h"
# include "stackft.h"
# include "threeft.h"

# define ANSI_RED "\x1b[31m"
# define ANSI_BLUE "\x1b[34m"
# define ANSI_GREEN "\x1b[32m"
# define ANSI_YELLOW "\x1b[33m"
# define ANSI_RESET "\x1b[0m"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int			ft_isalpha(int a);
bool		ft_str_isalpha(char *str);
int			ft_isalnum(int a);
bool		ft_str_isnum(char *string);
int			ft_isascii(int a);
int			ft_isdigit(int a);
int			ft_isprint(int a);

int			ft_toupper(int a);
void		ft_toupper_string(char *string);
int			ft_tolower(int a);
void		ft_tolower_string(char *string);

int			ft_atoi(const char *s);
long int	ft_latoi(const char *nptr);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s_1, const char *s_2, size_t n);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

void		ft_bzero(void *source, size_t n);
void		*ft_calloc(size_t amount, size_t n);
void		*ft_memchr(const void *a, int b, size_t n);
void		*ft_memcpy(void *destination, const void *source, size_t n);
void		*ft_memmove(void *destination, const void *source, size_t n);
void		*ft_memset(void *str, int c, size_t n);

char		*ft_strdup(const char *str);
char		*ft_strnstr(const char *bigy, const char *mini, size_t n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strchr(const char *s, int c);

void		ft_putchar_fd(char a, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putstr_color_fd(char *color, char *s, int fd);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_substr(const char *source, unsigned int start, size_t len);
char		*ft_strtrim(const char *s, char const *set);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);

void		ft_striteri(char *s, void (*f)(unsigned int, char *));

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

void		ft_quick(int *array, int low, int high);
int			ft_power(int nb, int power);
bool		ft_isprime(int nb);
int			ft_fib(int index);
int			ft_factorial(int nb);
int			ft_abs(int a);
int			ft_comdiv(int a, int b);

int			ft_printf(const char *str, ...);
int			ft_format(va_list *args, char c);
int			ft_int(int a);
int			ft_hex(unsigned int a, char c);
int			ft_point(unsigned long a, int sign);
int			ft_string(char *str);
int			ft_unsigned(unsigned int a);

char		*get_next_line(int fd);
char		*ft_read_to_left_str(int fd, char *left_str);
char		*ft_get_line(char *left_str);
char		*ft_new_left_str(char *left_str);
#endif
