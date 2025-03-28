/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:14:56 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/28 08:57:47 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	lettre;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		lettre = str[i];
		write(1, &lettre, 1);
		i++;
	}
}

/*int   main(void)
{
        char    *b;
        b = "Bonjour !";
	ft_putstr(b);
        return (0);
}*/
