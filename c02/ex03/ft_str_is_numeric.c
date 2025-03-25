/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:35:02 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/22 14:07:57 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			i = 0;
			return (i);
		}
		i++;
	}
	i = 1;
	return (i);
}

/*void    ft_str_is_numeric(char *str)
{
        int     size;
        int     a;

        a = ft_beta(str);
        printf ("%d", a);
}

int main(void)
{
        char *str = "ffjdssfjf";
        ft_str_is_alpha(str);
        return 0;
}*/
