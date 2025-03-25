/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:24:23 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/01 10:12:06 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = -2147483648;;
	ft_putnbr (nb);
	printf("\n");
	ft_putnbr (-2);
	printf("\n");
        ft_putnbr (98);        
	printf("\n");		        
	ft_putnbr (-0);

	return (0);
}*/
