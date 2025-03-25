/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:28:38 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/31 12:15:52 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*condition(int i, char *str)
{
	int	test;

	test = 1;
	if (i == 0)
	test = 0;
	else if (str[i - 1] < '0' || (str[i - 1] < 'A' && str[i - 1] > 'Z')
		|| (str[i - 1] < 'a' && str[i - 1] > 'z'))
	{
		test = 0;
	}
	if (test == 0 && (str[i] > 96 && str[i] < 123))
	{
		if (i == 0)
		{
			str[i] = str[i] - 32;
			return (str);
		}
		str[i] = str[i] - 32;
	}
	else if (test != 0 && (str[i] > 64 && str[i] < 91))
	{
		str[i] = str[i] + 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		t;
	char	*tes;

	i = 0;
	t = 0;
	while (str[i] != '\0')
	{
		tes = condition(i, str);
		i++;
	}
	return (tes);
}

/*int	main(void)
{
	char str[] = "Salut mon nom est 42lise";
	char *a = ft_strcapitalize(str);
	printf("%s", a);
	return(0);
	
}*/
