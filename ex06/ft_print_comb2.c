/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:15:16 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/05 15:34:06 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	col1;
	int	col2;

	col1 = 0;
	while (col1 <= 98)
	{
		col2 = col1 + 1;
		while (col2 <= 99)
		{
			ft_putchar('0' + col1 / 10);
			ft_putchar('0' + col1 % 10);
			ft_putchar(' ');
			ft_putchar('0' + col2 / 10);
			ft_putchar('0' + col2 % 10);
			if (col1 != 98)
				write(1, ", ", 2);
			col2++;
		}
		col1++;
	}
}
