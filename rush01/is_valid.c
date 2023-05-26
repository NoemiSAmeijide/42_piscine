/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:26:56 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/10 00:41:44 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_col(int board[4][4], int row, int col);
int	is_valid_row(int board[4][4], int row, int col);
int	is_valid_up(int board[4][4], int col);
//int	is_valid_down(int board[4][4], int col);
//int	is_valid_left(int board[4][4], int row);
//int	is_valid_right(int board[4][4], int row);

int	is_valid(int board[4][4], int row, int col, int input[16])
{
	if (is_valid_col(board, row, col))
		if (is_valid_row(board, row, col))
			if (is_valid_up(board, col) <= input[col])
				return (1);
	return (0);
}

/*				if (is_valid_down(board, col) <= input[col])
					if (is_valid_left(board, row) <= input[row + 8])
						if (is_valid_right(board, row) <= input[row + 12])
				return (1);
	return (0);*/
