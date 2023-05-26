/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush012.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:12:58 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/01 19:34:24 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	line1(int x)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 1;
	b = '/';
	c = '*';
	d = '|';
	write (1, &b, 1);
	if (x > 1)
	{
		while (a < (x - 1))
		{
			write (1, &c, 1);
			a++;
		}
		write (1, &d, 2);
	}
}

void	line2(int x)
{
	int	a;
	int	b;
	int	c;

	a = 1;
	b = '*';
	c = ' ';
	write (1, &b, 1);
	if (x > 1)
	{
		while (a < (x - 1))
		{
			write (1, &c, 1);
			a++;
		}
		write (1, &b, 1);
	}
}

void	line3(int x)
{
	int	a;
	int	c;
	int	d;

	a = 1;
	c = '*';
	d = '/';
	write (1, "\\", 1);
	if (x > 1)
	{
		while (a < (x - 1))
		{
			write (1, &c, 1);
			a++;
		}
		write (1, &d, 1);
	}
}
