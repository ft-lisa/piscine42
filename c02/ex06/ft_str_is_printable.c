/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:41:17 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/22 14:19:55 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			i = 0;
			return (i);
		}
		i++;
	}
	i = 1;
	return (i);
}

/*void    ft_str_is_printable(char *str)
{
        int     size;
        int     a;

        a = ft_beta(str);
        printf ("%d", a);
}

int main(void)
{
        char *str = "fdjshf";
        ft_str_is_alpha(str);
        return 0;
}*/
