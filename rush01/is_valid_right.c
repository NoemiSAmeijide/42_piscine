/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:28:17 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/09 22:45:31 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_right(int board[4][4], int row)
{
	int	h;
	int	i;
	int	n;

	i = 3;
	n = 0;
	h = 0;
	while (i >= 0)
	{
		if (board[row][i] > h)
		{
			n++;
			h = board[row][i];
		}
		i--;
	}
	return (n);
}
