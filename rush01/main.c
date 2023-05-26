/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:30:52 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/09 23:49:26 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_board(int board[4][4]);
int		backtrack(int board[4][4], int row, int col, int input[16]);
void	print(int board[4][4]);

int	main(int argc, char **argv)
{
	int	input[16];
	int	board[4][4];
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (i < 16)
		{
			if (argv[1][i * 2] >= '1' && argv[1][i * 2] <= '4')
			{
				input[i] = argv[1][i * 2] - '0';
			}
			else
				write (1, "Error", 5);
			i++;
		}
		init_board(board);
		if (backtrack(board, 0, 0, input))
			print(board);
		else
			write (1, "Error4", 6);
	}
	else
		write (1, "Error", 5);
}
