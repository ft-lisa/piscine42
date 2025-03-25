/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramiro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:43:04 by jramiro           #+#    #+#             */
/*   Updated: 2024/08/24 17:29:57 by jramiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str);

int	verif_input(int argc, char **argv)
{
	int	i;
	int length;

	if (argc != 2)
		return (0);
	length = len(argv[1]);
	if (length != 31)
		return (0);
	i = 0;
	while (i < length)
	{
		if (i % 2 != 0 && argv[1][i] != ' ')
			return (0);
		if (i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
			return (0);
		i++;
	}
	return (1);
}

int	len(char *str)
{
	int	sum;

	sum = 0;
	while (str[sum] != '\0')
		sum++;
	return (sum);
}
