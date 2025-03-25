/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:21:25 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/31 18:41:00 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(long n, int size, char *base)
{
	if (n >= size)
	{
		ft_write(n / size, size, base);
		ft_write(n % size, size, base);
	}
	else
		write(1, &base[n % size], 1);
}

int	size_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		check;
	long	nb;

	nb = (long)nbr;
	size = size_base(base);
	check = check_base(base);
	if (size == 0 || size == 1 || check == 0)
		return ;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	ft_write(nb, size, base);
}

/*#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return(0);
}*/
