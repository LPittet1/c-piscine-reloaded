/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:01:15 by lpittet           #+#    #+#             */
/*   Updated: 2024/09/28 14:02:25 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

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
