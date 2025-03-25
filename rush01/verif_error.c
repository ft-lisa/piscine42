/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:41:36 by barnaud           #+#    #+#             */
/*   Updated: 2024/08/25 14:48:31 by jramiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char ch)
{
	int	resultat;

	resultat = 0;
	resultat += ch - '0';
	return (resultat);
}

int	verif_opposite(char *str)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		if (i % 2 == 0)
		{
			if (str[i] == 4 && str[i + 8] != 1 || str[i + 8] == 4
				&& str[i] != 1)
				return (0);
			if (str[i + 16] == 4 && str[i + 24] != 1 || str[i + 24] == 4
				&& str[i + 16] != 1)
				return (0);
			if ((ft_atoi(str[i]) + ft_atoi(str[i + 8])) > 5 || (ft_atoi(str[i])
					+ ft_atoi(str[i + 8])) < 3)
				return (0);
			if (ft_atoi(str[i + 16]) + ft_atoi(str[i + 24]) > 5 || ft_atoi(str[i
						+ 16]) + ft_atoi(str[i + 24]) < 3)
				return (0);
		}
		i++;
	}
	return (1);
}

int	verif_border(char *str)
{
	if ((str[0] == '1' && (str[2] == '1' || str[4] == '1' || str[6] == '1'))
		|| (str[2] == '1' && (str[0] == '1' || str[4] == '1' || str[6] == '1'))
		|| (str[4] == '1' && (str[0] == '1' || str[2] == '1' || str[6] == '1'))
		|| (str[6] == '1' && (str[0] == '1' || str[2] == '1' || str[4] == '1')))
		return (0);
	if ((str[8] == '1' && (str[10] == '1' || str[12] == '1' || str[14] == '1'))
		|| (str[10] == '1' && (str[8] == '1' || str[12] == '1'
				|| str[14] == '1')) || (str[12] == '1' && (str[8] == '1'
				|| str[10] == '1' || str[14] == '1')) || (str[14] == '1'
			&& (str[8] == '1' || str[10] == '1' || str[12] == '1')))
		return (0);
	if ((str[16] == '1' && (str[18] == '1' || str[20] == '1' || str[22] == '1'))
		|| (str[18] == '1' && (str[16] == '1' || str[20] == '1'
				|| str[22] == '1')) || (str[20] == '1' && (str[16] == '1'
				|| str[18] == '1' || str[22] == '1')) || (str[22] == '1'
			&& (str[16] == '1' || str[18] == '1' || str[20] == '1')))
		return (0);
	if ((str[24] == '1' && (str[26] == '1' || str[28] == '1' || str[30] == '1'))
		|| (str[26] == '1' && (str[24] == '1' || str[28] == '1'
				|| str[30] == '1')) || (str[28] == '1' && (str[24] == '1'
				|| str[26] == '1' || str[30] == '1')) || (str[30] == '1'
			&& (str[24] == '1' || str[26] == '1' || str[28] == '1')))
		return (0);
	return (1);
}

int	verif_error(char *str)
{
	if (str[0] == '1' && str[16] != '1' || str[16] == '1' && str[0] != '1')
		return (0);
	if (str[22] == '1' && str[8] != '1' || str[8] == '1' && str[22] != '1')
		return (0);
	if (str[14] == '1' && str[30] != '1' || str[30] == '1' && str[14] != '1')
		return (0);
	if (str[6] == '1' && str[24] != '1' || str[24] == '1' && str[6] != '1')
		return (0);
	if (verif_opposite(str) == 0)
		return (0);
	if (verif_border(str) == 0)
		return (0);
	return (1);
}
