/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:37:47 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/04 12:01:24 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	int result;
	int nb;

	nb = 4;
	result = ft_is_prime(nb);
	printf("%d",result);
}*/
