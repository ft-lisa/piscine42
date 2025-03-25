/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deduction.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramiro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:46:13 by jramiro           #+#    #+#             */
/*   Updated: 2024/08/25 16:24:48 by jramiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	place_last(char **matrix, int value)
{
	int	i;
	int	j;
	int	x_value;
	int	y_value;
 
	i = 1;
	x_value = 10;
	y_value = 10;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (matrix[i][j] == value + '0')
			{
				x_value -= i;
				y_value -= j;
			}
			j++;
		}
		i++;
	}
	matrix[x_value][y_value] = value + '0';
}
 
void	place_last_inline_x(char **matrix, int pos_zero_x, int pos_zero_y, int y)
 {
	int	ten;
	int	x;
 
	x = 1;
	ten = 10;
	while (x < 5)
	{
		ten -= matrix[x][y] - '0';
		x++;
	}
	matrix[pos_zero_x][pos_zero_y] = ten + '0';
}

void	place_last_inline_y(char **matrix, int pos_zero_x, int pos_zero_y, int x)
{
	int	ten;
	int	y;
 
	y = 1;
	ten = 10;
	while (y < 5)
	{
		ten -= matrix[x][y] - '0';
		y++;
	}
	matrix[pos_zero_x][pos_zero_y] = ten + '0';
}

void	increament(char **matrix, char current, int *one, int *two, int *three, int *four)
{
	if (current == '1')
		*one += 1;
	if (current == '2')
		*two += 1;
	if (current == '3')
		*three += 1;
	if (current == '4')
		*four += 1;
}

void	check_for_four(char **matrix, int *one, int *two, int *three, int *four)
{
	if (*one == 3)
		place_last(matrix, 1);
	if (*two == 3)
		place_last(matrix, 2);
	if (*three == 3)
		place_last(matrix, 3);
	if (*four == 3)
		place_last(matrix, 4);
}

int	deduction(char **matrix)
{
	int	sum_one;
	int	sum_two;
	int	sum_three;
	int	sum_four;
	int	*pt_one;
	int	*pt_two;
	int	*pt_three;
	int	*pt_four;
	int	check_val;
	int	zero_counter;
	int	pos_zero_x;
	int	pos_zero_y;
	int	rows;
	int	cols;
	int	x;
	int	y;

	sum_one = 0;
	sum_two = 0;
	sum_three = 0;
	sum_four = 0;
	pt_one = &sum_one;
	pt_two = &sum_two;
	pt_three = &sum_three;
	pt_four = &sum_four;
	rows = 5;
	cols = 5;
	y = 1;
	while (y < rows)
	{
		x = 1;
		zero_counter = 0;
		while (x < cols)
		{
			if (matrix[x][y] == '0')
			{
				zero_counter++;
				pos_zero_x = x;
				pos_zero_y = y;
			}
			if (matrix[x][y] >= '1' && matrix[x][y] <= '4')
				increament(matrix, matrix[x][y], pt_one, pt_two, pt_three, pt_four);
			x++;
		}
		if (zero_counter == 1)
		{
			place_last_inline_x(matrix, pos_zero_x, pos_zero_y, y);
		}
		y++;
	}
	check_for_four(matrix, pt_one, pt_two, pt_three, pt_four);

	x = 1;
	while (x < cols)
	{
		y = 1;
		zero_counter = 0;
		while (y < rows)
		{
			if (matrix[x][y] == '0')
			{
				zero_counter++;
				pos_zero_x = x;
				pos_zero_y = y;
			}
			y++;
		}
		if (zero_counter == 1)
		{
			place_last_inline_y(matrix, pos_zero_x, pos_zero_y, x);
		}
		x++;
	}
	check_for_four(matrix, pt_one, pt_two, pt_three, pt_four);
	
	/* if deduction does nothing loop++, if loop == 3 then exit
	else
		*loop++;

	check_val = check(loop);
	if (check_val == 0)
		deduction(matrix, loop);
	else
		return (0)
	*/
	return (0);
}

/*
int	check(int *loop)
{
	if (*loop == 3)
		return (1)
	else
		return (0);
*/

