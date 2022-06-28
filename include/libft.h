/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:05:52 by ayalman           #+#    #+#             */
/*   Updated: 2022/04/14 15:12:13 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
// # ------------------------------ Libs --------------------------------
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdarg.h>
# include <limits.h>
# include <fcntl.h>
# include <signal.h>

// # ------------------------------ Colors ------------------------------
# define ANSI_RED		"\x1b[31m"
# define ANSI_BLUE		"\x1b[34m"
# define ANSI_GREEN		"\x1b[32m"
# define ANSI_YELLOW	"\x1b[33m"
# define ANSI_RESET		"\x1b[0m"

// # ------------------------------ Buffer ------------------------------
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

// # ------------------------------ Struct ------------------------------
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
// # ------------------------------ 1. Part ------------------------------
int		ft_isalpha(int a);
bool	ft_str_isalpha(char *str);
int		ft_isalnum(int a);
bool	ft_str_isnum(char *string);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isprint(int a);

int		ft_toupper(int a);
void	ft_toupper_string(char *string);
int		ft_tolower(int a);
void	ft_tolower_string(char *string);

int		ft_atoi(const char *s);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s_1, const char *s_2, size_t n);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

void	ft_bzero(void *source, size_t n);
void	*ft_calloc(size_t amount, size_t n);
void	*ft_memchr(const void *a, int b, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memmove(void *destination, const void *source, size_t n);
void	*ft_memset(void *str, int c, size_t n);

char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *bigy, const char *mini, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);

// # ------------------------------ 2.Part ------------------------------
void	ft_putchar_fd(char a, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr_color_fd(char *color, char *s, int fd);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(const char *source, unsigned int start, size_t len);
char	*ft_strtrim(const char *s, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// # ------------------------------ Bonus ------------------------------
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// # ------------------------------ Math --------------------------------
void	ft_quick(int *array, int low, int high);
int		ft_power(int nb, int power);
bool	ft_isprime(int nb);
int		ft_fib(int index);
int		ft_factorial(int nb);
int		ft_abs(int a);
int		ft_comdiv(int a, int b);

// # ------------------------------ Printf ------------------------------
void	ft_dec2hexhigh(long int decimalNumber);
int		ft_printf(const char *str, ...);
void	ft_dec2hexlow(long int decimalNumber);
int		ft_counthex(long int decimalNumber);
void	ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_countdec(long long p);
void	ft_putnbrlu(double nb);
void	ft_putnbru(unsigned int a);
int		ft_putstr(char *str);
void	ft_pointhex(long long int decimalNumber);
int		ft_count_phex(long long int decimalNumber);
int		ft_string(va_list *args);
int		ft_formater(va_list *args, char c);
int		ft_int_format(va_list *args, char c);
int		ft_hex_format(va_list *args, char c);
int		ft_unsigned_format(va_list *args);

// # ------------------------------ GNL ------------------------------
char	*get_next_line(int fd);
char	*ft_read_to_left_str(int fd, char *left_str);
char	*ft_get_line(char *left_str);
char	*ft_new_left_str(char *left_str);
#endif
