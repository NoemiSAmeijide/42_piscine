/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:28:49 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/09 22:45:22 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_left(int board[4][4], int row)
{
	int	h;
	int	i;
	int	n;

	i = 0;
	n = 0;
	h = 0;
	while (i < 4)
	{
		if (board[row][i] > h)
		{
			n++;
			h = board[row][i];
		}
		i++;
	}
	return (n);
}
