/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:05:11 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/01 10:49:25 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[j])
	{
		if (base[j] == '+' || base[j] == '-')
			return (0);
		if ((base[j] > 8 && base[j] < 14) || base[j] == 32)
			return (0);
		i = 0;
		while (base[i])
		{
			if ((base[j] == base[i]) && (i != j))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int	size_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	atoi_after(char *str, char *base, int i)
{
	int	j;
	int	nbr;

	j = 0;
	nbr = 0;
	while (str[i])
	{
		while (base[j])
		{
			if (base[j] == str[i])
			{
				nbr = nbr * size_base(base) + j;
				j = 0;
				i++;
			}
			else if (j + 1 == size_base(base))
				return (nbr);
			else
				j++;
		}
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	comp;

	i = 0;
	comp = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			comp = -comp;
		i++;
	}
	if (size_base(base) == 0 || size_base(base) == 1 || check_base(base) == 0)
		return (0);
	return (atoi_after(str, base, i) * comp);
}

/*int	main(void)
{
	char *str = "  ----+7FFFFFFF Sale Poussin!!!";
	char *base = "0123456789ABCDEF";
	printf ("%d", ft_atoi_base(str, base));
	return (0);
}*/
