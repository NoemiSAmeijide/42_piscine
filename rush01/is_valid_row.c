/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jmenos4_row.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassambe <iassambe@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:22:46 by iassambe          #+#    #+#             */
/*   Updated: 2023/04/09 20:44:33 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_row(int board[4][4], int row, int col)
{
	int	i;
	int	j;

	i = row - 1;
	j = row + 1;
	while (j <= 3)
	{
		if (board[row][col] == board[j][col])
		{
			return (0);
		}
		++j;
	}
	while (i >= 0)
	{
		if (board[row][col] == board[i][col])
		{
			return (0);
		}
		--i;
	}
	return (1);
}
