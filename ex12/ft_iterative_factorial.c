int ft_iterative_factorial(int nb)
{
    int fact;

    fact = 1;
    if (nb <= 0)
        return (0);
    else
    {
        while (nb > 1)
        {
            fact *= nb;
            nb--;
        }
    }
    return (fact);
}
