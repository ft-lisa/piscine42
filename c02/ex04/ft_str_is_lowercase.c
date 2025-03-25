/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:38:01 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/22 14:15:28 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			i = 0;
			return (i);
		}
		i++;
	}
	i = 1;
	return (i);
}

/*void    ft_str_is_lowercase(char *str)
{
        int     size;
        int     a;

        a = ft_beta(str);
        printf ("%d", a);
}

int main(void)
{
        char *str = "fjkwfkj";
        ft_str_is_alpha(str);
        return 0;
}*/
