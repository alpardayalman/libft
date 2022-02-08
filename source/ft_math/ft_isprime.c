#include "libft.h"

bool    ft_isprime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
        return (false);
    while (i < nb / 2)
    {
        if (nb % i == 0)
            return (false);
        i++;
    }
    return (true);
}