/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:10:00 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/31 10:46:58 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ab(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	if (b > a)
	{
		a1 = a / 10 + 48;
		a2 = a % 10 + 48;
		b1 = b / 10 + 48;
		b2 = b % 10 + 48;
		write(1, &a1, 1);
		write(1, &a2, 1);
		write(1, " ", 1);
		write(1, &b1, 1);
		write(1, &b2, 1);
		if (a != 98)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = 0;
		while (b <= 99)
		{
			ab(a, b);
			b = b + 1;
		}
		a = a + 1;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
