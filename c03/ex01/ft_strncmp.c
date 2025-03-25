/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:06:44 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/26 17:58:50 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}	
	result = s1[i] - s2[i];
	return (result);
}

/*int main(void)
{
        int     q;
        int     n;
        n = 2	;
        char s1[] = "abf";
        char s2[] = "bb";
        q = ft_strncmp(s1, s2, n);
        printf("%d\n", q);
        printf("%d", strncmp(s1, s2, n));
        return (0);
}*/
