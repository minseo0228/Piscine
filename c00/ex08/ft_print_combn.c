/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:09:33 by minseki3          #+#    #+#             */
/*   Updated: 2022/08/28 21:12:28 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

int	g_flag;

void	ft_combination(int arr[10], int index, int n, int value)
{
	int	i;

	if (n == 0)
	{
		if (g_flag)
		{
			write(1, ", ", 2);
		}
		i = 0;
		while (i < index)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		g_flag = 1;
	}
	else
	{
		if (value <= 9)
		{
			arr[index] = value;
			ft_combination(arr, index + 1, n - 1, value + 1);
			ft_combination(arr, index, n, value + 1);
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	g_flag = 0;
	ft_combination(arr, 0, n, 0);
}
