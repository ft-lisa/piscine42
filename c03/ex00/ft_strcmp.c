/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:11:38 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/26 10:03:58 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include <string.h>

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

/*int main(void)
{
	int	q;
	char s1[] = "aa";
	q = ft_strcmp(s1, s2);
	printf("%d\n", q);
	printf("%d", strcmp(s1, s2));
	return (0);
}*/
