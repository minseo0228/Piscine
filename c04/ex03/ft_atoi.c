/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:31:34 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/06 21:57:39 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	if (c == ' ' || c == '\n')
		return (1);
	else if (c == '\t' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	flag;
	int	answer;

	i = 0;
	flag = 1;
	answer = 0;
	while (check(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			flag *= -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		answer *= 10;
		answer += str[i] - '0';
		i++;
	}
	return (answer * flag);
}
