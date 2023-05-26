/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush012.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:12:58 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/02 16:59:02 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, char a, char b, char c)
{
	int	i;
	char enter;

	enter = '\n';
	i = 1;
	write (1, &a, 1);
	if (x > 1)
	{
		while (i < (x - 1))
		{
			write (1, &b, 1);
			i++;
		}
		write (1, &c, 1);
	}
	write (1, &enter, 1);
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (y >= 1)
	{
		if (x >= 1)
		{
			ft_putchar(x, '/', '*', '\\');
			while (i < (y - 1))
			{
				ft_putchar(x, '*', ' ', '*');
				i++;
			}
			if (y > 1)
			{
				ft_putchar(x, '\\', '*', '/');
			}
		}
	}
}

int	main(void)
{
	rush(4, 4);
}
