/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:26:26 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/24 18:41:52 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_top_line(char **matrix, char **argv, int x, int y)
{
	int	i;

	i = (x - 1) * 2;
        if (x == 0 || x == 5)
                matrix[x][y] = '0';
        else
		matrix[x][y] = argv[1][i];

}
/*1st: left, 2nd: middle, 3rd: right*/

void    ft_middle_line(char **matrix, char **argv, int x, int y)
{
	int	i;

	i = 0;
        if (x == 0)
	{
		i = 14 + y * 2;
		matrix[x][y] = argv[1][i];
	}
	else if	(x == 5)
	{
		i = 22 + y * 2;
		matrix[x][y] = argv[1][i];
	}	
        else
                matrix[x][y] = '0';
}
/*1st: left and right, 2nd: middle*/

void    ft_bottom_line(char **matrix, char **argv, int x, int y)
{
	int	i;

	i = 6 + x * 2;
        if (x == 0 || x == 5)
                matrix[x][y] = '0';
        else
                matrix[x][y] = argv[1][i];
}
/*1st: left, 2nd: middle, 3rd: right*/

void	initialize(char **argv, char **matrix)
{
	int		x;
	int		y;

        y = 0;
        while (y < 6)
        {
                x = 0;
                while (x < 6)
                {
                        if (y == 0)
                                ft_top_line(matrix, argv, x, y);
                        else if (y != 5)
                                ft_middle_line(matrix, argv, x, y);
                        else
                                ft_bottom_line(matrix, argv, x, y);
                        x++;
                }
                y++;
        }
}