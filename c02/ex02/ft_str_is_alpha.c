/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:25:43 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/31 11:01:59 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			i = 0;
			return (i);
		}
		i++;
	}
	i = 1;
	return (i);
}

/*void	ft_str_is_alphaa(char *str)
{
	int	size;
	int	a;

	a = ft_beta(str);
	printf ("%d", a);
}

int main(void)
{
	char *str = "sasfjnaddkj";
	ft_str_is_alpha(str);
	return 0;
}*/
