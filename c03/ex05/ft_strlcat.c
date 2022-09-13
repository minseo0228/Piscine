/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:01:58 by minseki3          #+#    #+#             */
/*   Updated: 2022/08/31 20:10:42 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len3(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	lendest = len3(dest);
	lensrc = len3(src);
	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	if (lendest > size)
		return (lensrc + size);
	else
		return (lendest + lensrc);
}
