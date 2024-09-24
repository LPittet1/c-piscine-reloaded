#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tab;
    int i;

    i = 0;
    if (min >= max)
    {
        tab = NULL;
        return (NULL);
    }
    tab = malloc(sizeof(int) * (max - min) + 1);
    if (tab == NULL)
        return (NULL);
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    tab [i] = '\0';
    return (tab);
}
