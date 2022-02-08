#include "libft.h"

int ft_power(int nb, int power)
{
    int i;
    int b;

    b = nb;
    i = 0;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    nb *= ft_power(nb, (power - 1));
    return (nb);
}