/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:23:54 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/05 20:34:35 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			ft_putchar(x / 10 + '0');
			ft_putchar(x % 10 + '0');
			ft_putchar(' ');
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			++y;
			if (x + y < 198)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		++x;
		y = x + 1;
	}
}
