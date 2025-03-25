/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:58:44 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/20 11:52:42 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;
	int	a;

	t = 0;
	i = size - 1;
	while (t < size / 2)
	{
		a = tab[t];
		tab[t] = tab[i];
		tab[i] = a;
		t++;
		i--;
	}
}

/*int main(void)
{
	int	size;
	size = 6;
	int	tab[6] = {1, 2, 3, 4, 5, 8};

	ft_rev_int_tab(tab, size);
	return (0);
}*/
