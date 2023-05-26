/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:26:27 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/06 20:59:01 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < size)
	{
		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			i++;
		}
		j++;
		i = j + 1;
	}
}
