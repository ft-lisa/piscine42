/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:05:11 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/21 11:54:05 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	number(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i]  == 32 || str[i]  == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			num++;
		}
		num += 2;
		i++;
	}
	return (num);
}
int	ft_atoi(char *str)
{
	int	i;
	int	comp;
	int	r;

	r = 0;
	comp = number(str);
	i = 0;
	while (str[i]  == 32 || str[i]  == 43 || str[i] == 45)
	{
		i++;
	}
                while (str[i] > 47 && str[i] < 58)
                {
                        if (comp % 2 == 0)
                        {
                                r = r * 10;
                                r = r + str[i] - 48;
                        }
                        else
                        {
                                r = r * 10;
                                r = r - str[i] + 48;
                        }
                        i++;
                }

	return (r);
}
			
int	main(void)
{
	int	a;
	char	*str = "  --+-+--+5545gg5";
	a = ft_atoi(str);
	printf("%d",  a);
	return 0;
}
