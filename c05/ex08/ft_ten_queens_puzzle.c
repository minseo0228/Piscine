/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:21:38 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/10 17:12:29 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(int j, int n, int chess[10])
{
	if (chess[j] == chess[n])
		return (1);
	else if ((j - n) == (chess[j] - chess[n]))
		return (1);
	else if ((j - n) == (chess[n] - chess[j]))
		return (1);
	else
		return (0);
}

void	print_chess(int chess[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(chess[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	dfs(int n, int chess[10], int *count)
{
	int	i;
	int	j;
	int	flag;

	if (n == 10)
	{
		print_chess(chess);
		(*count)++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		flag = 1;
		j = -1;
		while (++j < n)
		{
			chess[n] = i;
			if (check(j, n, chess))
				flag = 0;
		}
		if (flag)
			dfs(n + 1, chess, count);
	}
}	

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	chess[10];
	int	count;

	i = 0;
	count = 0;
	while (i < 10)
	{
		chess[0] = i;
		dfs(1, chess, &count);
		i++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_ten_queens_puzzle());
}
*/
