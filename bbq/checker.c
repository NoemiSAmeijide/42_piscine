/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:29:50 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/19 15:28:39 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct s_mapa {
	int	total;
	int	linea;
};

struct	s_val_inicial {
	int		n_lineas;
	char	c_buit;
	char	c_obstacle;
	char	c_ple;
}; 

int	check_n_char(int *n_char, int *n_lineas, struct s_mapa *size, int *flag)
{
	if (*n_char != size->linea)
	{
		flag++;
		return (-1);
	}
	else
	{
		*n_char = 0;
		n_lineas++;
	}
	return (*n_lineas);
}

int	check_file(char *taula, struct s_mapa *size, struct s_val_inicial *data)
{
	int	i;
	int	flag;
	int	n_lineas;
	int	n_char;

	i = 5;
	flag = 0;
	n_lineas = 0;
	n_char = 0;
	while (taula[i] <= size->total && flag == 0)
	{
		if (taula[i] != data->c_buit)
			return (0);
		else if (taula[i] != '\n')
			n_char++;
		else
			n_lineas = check_n_char(&n_char, &n_lineas, size, &flag);
		i++;
	}
	if (n_lineas != data->n_lineas)
		return (0);
	return (1);
}
