/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:10:29 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/07 21:39:56 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len2(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_space(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == ' ')
		return (1);
	return (0);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len2(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	baselocation(char *base, char c)
{
	int	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	minus = 1;
	result = 0;
	if (! ft_check(str))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (baselocation(base, str[i] != -1))
	{
		result = baselocation(base, str[i]) + result * len2(base);
		i++;
	}
	return (minus * result);
}
