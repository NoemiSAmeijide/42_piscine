/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:29:39 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/09 22:45:10 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_down(int board[4][4], int col)
{
	int	h;
	int	i;
	int	n;

	i = 3;
	n = 0;
	h = 0;
	while (i >= 0)
	{
		if (board[i][col] > h)
		{
			n++;
			h = board[i][col];
		}
		i--;
	}
	return (n);
}
