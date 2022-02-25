#include "libft.h"

char *bin(long int a)
{
    char *ptr;
    int b = a;
    int index = 0;
    while (b != 0)
    {
        index++;
        b/=2;
    }
    ptr = malloc(index + 1);
    if (!ptr)
        return (0);
    while (index > 0)
    {
        ptr[index] = (a % 2) + '0';
        a/=2;
        index--;
    }
    return (ptr + 1);
}
