/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 00:05:35 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/11 16:01:20 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_t(int *t, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		t[i] = i;
		i++;
	}
}

void	increment_t(int *t, int n, int i)
{
	if (t[i] == 10 - (n - i))
		increment_t(t, n, i - 1);
	else
		t[i]++;
	while (++i < n)
		t[i] = t[i - 1] + 1;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_t(int *t, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar('0' + t[i++]);
	if (t[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	t[10];

	init_t(t, n);
	while (t[0] != 10 - n)
	{
		print_t(t, n);
		increment_t(t, n, n - 1);
	}
	print_t(t, n);
}
