/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:37:15 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/31 10:52:37 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{	
	char	*b;
	int		a;
	b = "Bonjour !";
	a = ft_strlen(b);
	printf("%i", a);
	return (0);
}*/
