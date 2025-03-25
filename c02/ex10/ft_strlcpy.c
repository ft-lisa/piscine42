/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lismarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:47:27 by lismarti          #+#    #+#             */
/*   Updated: 2024/08/31 12:21:42 by lismarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sizes(char *src)
{
	int	t;

	while (src[t] != '\0')
	{
		t++;
	}
	return (t);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	b;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		b = t(src);
	}
	return (b);
}
