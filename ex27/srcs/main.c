/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpittet <lpittet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:47:30 by lpittet           #+#    #+#             */
/*   Updated: 2024/09/28 13:47:50 by lpittet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int main (int ac, char **av)
{
    int fd;

    if (ac == 1)
    {
        write (2, "File name missing.\n", 19);
        return (1);
    }
    if (ac > 2)
    {
        write (2, "Too many arguments.\n", 20);
        return (1);
    }
    if ((fd = open(av[1], O_RDONLY)) == -1)
    {
        write (2, "Cannot read file.\n", 18);
        return (1);
    }
    display_file(fd);
    close(fd);
    return (0);
}