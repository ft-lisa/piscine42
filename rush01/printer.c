/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramiro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:46:01 by jramiro           #+#    #+#             */
/*   Updated: 2024/08/25 11:46:03 by jramiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    printer(char **matrix)
{
    int rows;
    int cols;
    int x;
    int y;

    rows = 5;
    cols = 5;
    y = 1;
    while (y < rows)
    {
        x = 1;
        while (x < cols)
        {
            write(1, &matrix[x][y], 1);
            if (x != 4)
                write(1, " ", 1);
            x++;
        }
        write(1, "\n", 1);
        y++;
    }
    return ;
}
