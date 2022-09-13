/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:37:49 by minseki3          #+#    #+#             */
/*   Updated: 2022/08/28 11:37:53 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	col = 0;
	while (++col <= y && x > 0)
	{
		row = 0;
		while (++row <= x)
		{
			if ((row == 1 && col == 1))
				ft_putchar('A');
			else if ((row == x && col == 1) || (row == 1 && col == y))
				ft_putchar('C');
			else if ((row == x && col == y))
				ft_putchar('A');
			else if (((1 < row) && (row < x)) && (col == 1 || col == y))
				ft_putchar('B');
			else if (((1 < col) && (col < y)) && (row == 1 || row == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
