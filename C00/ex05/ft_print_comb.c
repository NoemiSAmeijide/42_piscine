/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:32:49 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/14 22:28:14 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n1, char n2, char n3)
{
	write (1, &n1, 1);
	write (1, &n2, 1);
	write (1, &n3, 1);
	if ((n1 != '7') || (n2 != '8') || (n3 != '9'))
	{
		write (1, ","" ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				++c;
			}
			b = b + 1;
			c = b + 1;
		}
		a = a + 1;
		b = a + 1;
		c = b + 1;
	}
}
