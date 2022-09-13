/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:14:12 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/10 17:37:11 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else
	{
		i = 1;
		while (++i < nb)
		{
			if (nb % i == 0)
				return (0);
		}
		return (1);
	}
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_is_prime(8));
	printf("%d",ft_is_prime(3));
}
*/
