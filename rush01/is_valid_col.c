/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jmenos4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassambe <iassambe@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:19:13 by iassambe          #+#    #+#             */
/*   Updated: 2023/04/09 20:44:58 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_col(int board[4][4], int row, int col)
{
	int	i;
	int	j;

	i = col - 1;
	j = col + 1;
	while (j <= 3)
	{
		if (board[row][col] == board[row][j])
		{
			return (0);
		}
		++j;
	}
	while (i >= 0)
	{
		if (board[row][col] == board[row][i])
		{
			return (0);
		}
		--i;
	}
	return (1);
}
