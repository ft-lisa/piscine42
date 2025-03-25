/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:23:17 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/25 19:01:25 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(matrix)
{
	int	x;
	int	y;
	int	view;
	int	high_point;
	int	result;

	y = 1;
	while (y < 5)
	{
		hight_point = 0;
		view = 0;
		x = 0;
		result = matrix[0][y];
		while (x < 5)
		{
			if (hight_point < matrix[x][y])
			{
				hight_point = matrix[x][y];
				view++;
			}
			x++;
		}
		if(result != view)
		{
			return(0);
		}
		y++;
	}
	return(1);
}

int	check_line_reverse(matrix)
{
	int	x;
	int	y;
	int	view;
	int	high_point;
	int	result;

	y = 5;
	while (y > 1)
	{
		hight_point = 0;
		view = 0;
		x = 5;
		result = matrix[5][y];
		while(x > 1)
		{
			if (hight_point < matrix[x][y])
			{
				hight_point = matrix[x][y];
				view++;
			}
			x--;
		}
		if (result != view)
		{
			return(0);
		}
		y--;
	}
	return(1);
}
int     check_row(matrix)
{
        int     x;
        int     y;
        int     view;
        int     high_point;
        int     result;

        y = 1;
        while (x < 5)
        {
                hight_point = 0;
                view = 0;
                y = 0;
                result = matrix[x][0];
                while (y < 5)
                {
                        if (hight_point < matrix[x][y])
                        {
                                hight_point = matrix[x][y];
                                view++;
                        }
                        y++;
                }
                if(result != view)
                {
                        return(0);
                }
                x++;
        }
        return(1);
}

int     check_row_reverse(matrix)
{
        int     x;
        int     y;
        int     view;
        int     high_point;
        int     result;

        x = 5;
        while (x > 1)
        {
                hight_point = 0;
                view = 0;
                y = 5;
                result = matrix[x][5];
                while(y > 1)
                {
                        if (hight_point < matrix[x][y])
                        {
                                hight_point = matrix[x][y];
                                view++;
                        }
                        y--;
                }
                if (result != view)
                {
                        return(0);
                }
                x--;
        }
        return(1);
}

int	check(matrix)
{
	int	result;
	
	result = 0;
	result =  checkline(matrix) + check_line_reverse(matrix) + check_row(matrix) + check_row_reverse(matrix);

	if (result == 4)
		return(1);
	else
		return(0);
}
