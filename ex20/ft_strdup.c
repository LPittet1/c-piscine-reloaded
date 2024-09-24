#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

char    *ft_strdup(char *src)
{
    int     len;
    int     i;
    char    *dup;

    len = ft_strlen(src);
    dup = malloc(sizeof(char) * len + 1);
    if (dup == NULL)
        return(NULL);
    i = 0;
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
