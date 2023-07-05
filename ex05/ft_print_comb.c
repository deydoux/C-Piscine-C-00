/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:55:20 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/05 10:27:44 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int i1 = '0';
	int i2 = '1';
	int i3 = '2';

	while (i3 <= '9')
	{
		write(1, &i1, 1);
		write(1, &i2, 1);
		write(1, &i3, 1);

		i1++;
		i2++;
		i3++;

		if (i3 != 9)
		{
			write(1, " ", 1);
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return 0;
}
