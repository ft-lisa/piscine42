/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:02:17 by lismarti          #+#    #+#             */
/*   Updated: 2024/09/01 19:20:59 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_write(int argc, char **argv)
{
	int		j;
	int		i;

	j = 1;
	i = 0;
	while (j < argc)
        {
		i = 0;
                while (argv[j][i] != '\0')
                {
                        write(1, &argv[j][i], 1);
                        i++;
                }
                write(1, "\n", 1);
                j++;
        }
}
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

int	main(int argc, char **argv)
{
	int		j;
	int		check;
	char	*swap;

	j = 1;
	if (argc == 1)
		return (0);
    while (check != 0)
    {
        check = 0;
        while (j < argc - 1)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                check = 1;
                swap = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = swap;
            }
            j++;
        }
    }
	ft_write(argc, argv);
}
