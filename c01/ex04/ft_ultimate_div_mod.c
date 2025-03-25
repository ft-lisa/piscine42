/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:07:13 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/22 13:45:56 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	if (b != 0)
	{
	c = *a;
	*a = c / *b;
	*b = c % *b;
	}
}

/*int main(void)
{
	int *a, *b;
	int c, d;

	c = 15;
	d = 5;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a ,b);
	printf("a=%i et b=%i", c, d);
}*/
