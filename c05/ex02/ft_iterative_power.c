/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:20:42 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/02 09:28:40 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int result;

	nb = 2;
	power = 4;
	result = ft_iterative_power(nb, power);
	printf("%d", result);
}*/
