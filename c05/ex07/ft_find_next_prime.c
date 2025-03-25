/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:07:15 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/04 12:01:55 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	prime(int result)
{	
	int	i;

	i = 2;
	while (i < 46341)
	{
		if (result % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	result;

	result = nb;
	i = 0;
	if (nb < 2)
		return (2);
	while (i == 0)
	{
		i = prime(result);
		result++;
	}
	return (result - 1);
}
/*#include <stdio.h>
int main(void)
{
        int result;
	int nb;
        nb = 2147483647;
        result = ft_find_next_prime(nb);
        printf("%d",result);
}*/
