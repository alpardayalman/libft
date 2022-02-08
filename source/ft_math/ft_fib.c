#include "libft.h"

int ft_fib(int index)
{
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    return (ft_fib(index - 2) + ft_fib(index - 1));
}