/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:29:44 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/10 17:18:32 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			a = nb * a;
			power--;
		}
		return (a);
	}
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_iterative_power(2,3));
}
*/
