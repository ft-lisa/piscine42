/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:42:20 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/20 11:54:33 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a, b, c, d;
	int *div, *mod;

	a = 15;
	b = 5;

	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);

	printf("div=%i et mod=%i", a, b);
	return (0);
}*/
