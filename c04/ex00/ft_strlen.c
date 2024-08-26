/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:10:23 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/21 08:13:05 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str)
{
        int     i;
        int     car;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

/*int   main(void)
{       
        char    *b;
        int             a;
        b = "Bonjour !";
        a = ft_strlen(b);
        printf("%i", a);
        return (0);
}*/

