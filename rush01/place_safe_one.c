/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_safe_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramiro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:58:47 by jramiro           #+#    #+#             */
/*   Updated: 2024/08/25 14:39:21 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	top_edge(char **matrix);
void	bot_edge(char **matrix);
void	left_edge(char **matrix);
void	right_edge(char **matrix);

#define MAX_X 5
#define MAX_Y 5

void	place_safe_one(char **matrix)
{
	top_edge(matrix);
	bot_edge(matrix);
	left_edge(matrix);
	right_edge(matrix);
	return ;
}

void	top_ligne_four(char **matrix, int x, int y)
{
	if (matrix[x][y + 1] == '0')
		matrix[x][y + 1] = '1';
	if (matrix[x][y + 2] == '0')
		matrix[x][y + 2] = '2';
	if (matrix[x][y + 3] == '0')
		matrix[x][y + 3] = '3';
	if (matrix[x][y + 4] == '0')
		matrix[x][y + 4] = '4';
}

void	top_edge(char **matrix)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (x <= MAX_X)
	{
		if (matrix[x][y] == '4')
		{
			ligne_four(matrix, x, y);
		}
		if (matrix[x][y] == '1')
		{
			if (matrix[x][y + 1] == '0')
				matrix[x][y + 1] = '4';
			if (matrix[x][MAX_Y] == '2')
				if (matrix[x][MAX_Y - 1] == '0')
					matrix[x][MAX_Y - 1] = '3';
		}
		x++;
	}
}

void	bot_line_four(char **matrix, int x, int MAX_Y)
{
	if (matrix[x][MAX_Y - 1] == '0')
		matrix[x][MAX_Y - 1] = '1';
	if (matrix[x][MAX_Y - 2] == '0')
		matrix[x][MAX_Y - 2] = '2';
	if (matrix[x][MAX_Y - 3] == '0')
		matrix[x][MAX_Y - 3] = '3';
	if (matrix[x][MAX_Y - 4] == '0')
		matrix[x][MAX_Y - 4] = '4';
}

void	bot_edge(char **matrix)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (x <= MAX_X)
	{
		if (matrix[x][MAX_Y] == '4')
		{
			bot_line_four(matrix, x, y);
		}
		if (matrix[x][MAX_Y] == '1')
		{
			if (matrix[x][MAX_Y - 1] == '0')
				matrix[x][MAX_Y - 1] = '4';
			if (matrix[x][y] == '2')
				if (matrix[x][y + 1] == '0')
					matrix[x][y + 1] = '3';
		}
		x++;
	}
}

void	left_line_four(char **matrix, int x, int y)
{
	if (matrix[x + 1][y] == '0')
		matrix[x + 1][y] = '1';
	if (matrix[x + 2][y] == '0')
		matrix[x + 2][y] = '2';
	if (matrix[x + 3][y] == '0')
		matrix[x + 3][y] = '3';
	if (matrix[x + 4][y] == '0')
		matrix[x + 4][y] = '4';
}

void	left_edge(char **matrix)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (y <= MAX_Y)
	{
		if (matrix[x][y] == '4')
		{
			left_line_four(matrix, x, y);
		}
		if (matrix[x][y] == '1')
		{
			if (matrix[x + 1][y] == '0')
				matrix[x + 1][y] = '4';
			if (matrix[MAX_X][y] == '2')
				if (matrix[MAX_X - 1][y] == '0')
					matrix[MAX_X - 1][y] = '3';
		}
		y++;
	}
}

void	right_line_four(char **matrix, int x, int y)
{
	if (matrix[MAX_X - 1][y] == '0')
		matrix[MAX_X - 1][y] = '1';
	if (matrix[MAX_X - 2][y] == '0')
		matrix[MAX_X - 2][y] = '2';
	if (matrix[MAX_X - 3][y] == '0')
		matrix[MAX_X - 3][y] = '3';
	if (matrix[MAX_X - 4][y] == '0')
		matrix[MAX_X - 4][y] = '4';
}

void	right_edge(char **matrix)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (y <= MAX_Y)
	{
		if (matrix[MAX_X][y] == '4')
		{
			right_line_four(matrix, x, y);
		}
		if (matrix[MAX_X][y] == '1')
		{
			if (matrix[MAX_X - 1][y] == '0')
				matrix[MAX_X - 1][y] = '4';
			if (matrix[x][y] == '2')
				if (matrix[x + 1][y] == '0')
					matrix[x + 1][y] = '3';
		}
		y++;
	}
}
