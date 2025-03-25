/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:20:16 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/20 11:51:26 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	change(int *tab, int a, int b)
{
	int	c;

	c = tab[a];
	tab[a] = tab[b];
	tab[b] = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	q;
	int	a;
	int	b;

	q = 1;
	a = 0;
	b = 0;
	while (q != 0)
	{
		q = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				if (a < b && tab[a] > tab[b])
				{
					change(tab, a, b);
					q++;
				}
				b++;
			}
			a++;
		}
	}
}

/*int	main(void)
{
	int	tab[5]={9, 5, 10, 4, 1};
	int	size;

	size = 5;
	ft_sort_int_tab(tab, size);
	return (0);

}*/
