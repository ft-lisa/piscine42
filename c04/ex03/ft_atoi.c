/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:05:11 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/31 18:40:23 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_negatif(char *str, int i)
{
	int	num;

	num = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		num = num * 10 - str[i] + 48;
		i++;
	}
	return (num);
}

int	ft_positif(char *str, int i)
{
	int	num;

	num = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	comp;
	int	result;

	i = 0;
	comp = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		comp++;
		i++;
	}
	if (comp % 2 == 0)
		result = ft_positif (str, i);
	else
		result = ft_negatif (str, i);
	return (result);
}	
/*int	main(void)
{
	int	a;
	char	str[] = " 21 47483647-gg5";
	a = ft_atoi(str);
	printf("%d",  a);
	return 0;
}*/
