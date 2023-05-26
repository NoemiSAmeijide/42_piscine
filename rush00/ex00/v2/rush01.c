/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush013.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:07:55 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/01 18:37:36 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	line1(int x);
void	line2(int x);
void	line3(int x);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = '\n';
	if (y >= 1)
	{
		if (x >= 1)
		{
			line1(x);
			write (1, &b, 1);
			while (a < (y - 1))
			{
				line2(x);
				write (1, &b, 1);
				a++;
			}
			if (y > 1)
			{
				line3(x);
				write (1, &b, 1);
			}
		}
	}
}
