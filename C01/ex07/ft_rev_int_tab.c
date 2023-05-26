/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 23:41:01 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/07 13:00:18 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	*p_final;
	int	i;

	aux = 0;
	i = 0;
	p_final = tab + (size - 1);
	while (i < (size / 2))
	{
		aux = *tab;
		*tab = *p_final;
		*p_final = aux;
		tab++;
		p_final--;
		i++;
	}
}
