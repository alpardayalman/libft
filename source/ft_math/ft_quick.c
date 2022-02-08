#include "libft.h"

static void ft_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

static int ft_partition(int *array, int low, int high)
{
    int pivot;
    int i;
    int j;
    
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
    }
    ft_swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void ft_quick(int *array, int low, int high)
{
    if (low < high)
    {
        int pi;

        pi = ft_partition(array, low, high);
        ft_quick(array, low, pi - 1);
        ft_quick(array, pi + 1, high);
    }
}