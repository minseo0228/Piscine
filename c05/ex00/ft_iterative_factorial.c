/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:21:22 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/10 17:16:37 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 1)
		{
			a = a * nb;
			nb--;
		}
		return (a);
	}
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_iterative_factorial(5));
}
*/
