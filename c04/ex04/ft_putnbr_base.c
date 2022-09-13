/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:00:02 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/07 21:35:51 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenbase;

	lenbase = len(base);
	if (!(check(base)))
		return ;
	if (nbr == -2147483648)
	{
		write (1, "-", 1);
		ft_putnbr_base(2147483648 / lenbase, base);
		ft_putnbr_base(2147483648 % lenbase, base);
		return ;
	}
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	if (nbr < lenbase)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	ft_putnbr_base(nbr / lenbase, base);
	ft_putnbr_base(nbr % lenbase, base);
}
