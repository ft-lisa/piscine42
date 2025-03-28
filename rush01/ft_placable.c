/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:41:29 by barnaud           #+#    #+#             */
/*   Updated: 2024/08/25 18:41:39 by barnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_placable(char **matrix, int x, int y, int n)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (matrix[x][i] == n || matrix[i][y] == n)
			return (0);
		i++;
	}
	return (1);
}
