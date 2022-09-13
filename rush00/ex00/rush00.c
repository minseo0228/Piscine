/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:37:00 by minseki3          #+#    #+#             */
/*   Updated: 2022/08/28 11:37:02 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	row;
	int	col;

	col = 1;
	while (col <= y && x > 0)
	{
		row = 1;
		while (row <= x)
		{
			if ((row == 1 && col == 1) || (row == x && col == 1))
				ft_putchar('o');
			else if ((row == 1 && col == y) || (row == x && col == y))
				ft_putchar('o');
			else if (((1 < col) && (col < y)) && (row == 1 || row == x))
				ft_putchar('|');
			else if ((1 < row && row < x) && (col == 1 || col == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
