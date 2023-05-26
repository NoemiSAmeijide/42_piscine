/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:28:30 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/10 00:28:29 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int board[4][4], int row, int col, int input[16]);

int	backtrack(int board[4][4], int row, int col, int input[16])
{
	int	i;

	if (col == 4)
	{
		col = 0;
		++row;
		if (row == 4)
			return (1);
	}
	i = 1;
	while (i <= 4)
	{
		board[row][col] = i;
		if (is_valid(board, row, col, input))
			if (backtrack(board, row, col + 1, input))
				return (1);
		++i;
	}
	return (0);
}
