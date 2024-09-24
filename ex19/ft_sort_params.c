void ft_putchar(char c);

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char **f_sort(int ac, char **av)
{
    int		i;
	char	*t;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			t = av[i];
			av[i] = av[i + 1];
			av[i + 1] = t;
			if (i != 1)
				i--;
		}
		else
			i++;
	}
	return (av);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	av = f_sort(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}