/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:17:12 by minseki3          #+#    #+#             */
/*   Updated: 2022/08/31 12:33:23 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len1(char *dest)
{
	int	i;

	i = 0;
	while (*dest)
	{
		i++;
		dest++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = len1(dest);
	j = 0;
	while (src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = 0;
	return (dest);
}
