/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:49:07 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/22 08:59:38 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	condition(char *tab[], int j, int i)
{
	int	c;

	while (tab[j][i] != '\0')
        {
                                if (tab[j][i] > tab[j+1][i] || tab[j+1][i] == '\0')
                                {
                                        c = tab[j][i];
					tab[j][i] = tab[j+1][i];
					tab[j+1][i] = c;
                                }
                                i++;
				return(tab);
                        }
}
char    ft_sort_int_tab(char *tab[])
{
        int     q;
        int     i;
        int     j;
	char	**k;

        q = 1;
        i = 0;
        j = 1;
        while (q != 0)
        {
                q = 0;
                while (tab[j][i] != '\0')
                {
                        i = 0;
                        k = condition(tab, j, i);
                        j++;
			q = 1;
                }
        }
	return(k);
}

int     main(int  argc, char* argv[])
{
        char    t;
	char	q;
        int     i;
        int     j;

        i = 0;
        j = 1;
	q = ft_sort_int_tab(argv);
        while (argv[j][0] != '\0')
        {
                while (argv[j][i] != '\0')
                {
                        t = argv[j][i];
                        write(1, &t, 1 );
                        i++;
                }
                write(1, "\n", 2);
                j++;
        }
        return (0);
} 
