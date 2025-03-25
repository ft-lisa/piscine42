/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:17:58 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/19 15:00:46 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	int	car;

	i = 0;
	while (str[i] != '\0')
	{
		car = str[i];
		write(1, &car, 1);
		i++;
	}
}

/*int	main(void)
{
	char	*str;
	int		a;

	str = "Bonjour !";

	ft_putstr(str);
	return (0);
}*/
