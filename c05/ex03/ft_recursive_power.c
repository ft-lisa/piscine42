/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:38:41 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/02 09:32:30 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>

int	main(void)
{
	int nb;
	int power;
	int result;

	nb = 2;
	power = 4;
	result = ft_recursive_power(nb, power);
	printf("%d", result);
}*/
