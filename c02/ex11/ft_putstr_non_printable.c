/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseki3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:30:03 by minseki3          #+#    #+#             */
/*   Updated: 2022/09/04 10:34:55 by minseki3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	negnum;

	while (*str)
	{
		if (*str <= 31 || *str >= 127)
		{
			write(1, "\\", 1);
			if (*str < 0)
			{
				negnum = *str + 256;
				write(1, &"0123456789abcdef"[negnum / 16], 1);
				write(1, &"0123456789abcdef"[negnum % 16], 1);
			}
			else
			{
				write(1, &"0123456789abcdef"[*str / 16], 1);
				write(1, &"0123456789abcdef"[*str % 16], 1);
			}
		}
		else
			write(1, str, 1);
		str++;
	}
}
