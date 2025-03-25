/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:27:15 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/02 12:27:17 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int main(void)
{
	int	result;
	int	nb;

	nb = 36;
	result = ft_sqrt(nb);
	printf("%d", result);
}*/
