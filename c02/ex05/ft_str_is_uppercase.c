/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:39:31 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/22 14:18:26 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{	
			i = 0;
			return (i);
		}
		i++;
	}
	i = 1;
	return (i);
}

/*void    ft_str_is_uppercase(char *str)
{
        int     size;
        int     a;

        a = ft_beta(str);
        printf ("%d", a);
}

int main(void)
{
        char *str = "fwfddv";
        ft_str_is_alpha(str);
        return 0;
}*/
