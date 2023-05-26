/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:53:36 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/19 15:28:41 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	check_file(char *taula, struct s_mapa *size, struct s_val_inicial *data);
int	check_n_char(int *n_char, int n_lineas, struct s_mapa *size, int *flag);	
	
typedef struct s_mapa {
	int	total;
	int	linea;
}t_mapa;

typedef struct	s_val_inicial {
	int		n_lineas;
	char	c_buit;
	char	c_obstacle;
	char	c_ple;
}t_val_inicial;

int	get_array(int fd, struct s_mapa *size, struct s_val_inicial *data)
{
	char	*taula;

	taula = (char *)malloc(sizeof(char) * size->total);
	if (taula == NULL)
	{
		write (1, "Malloc Error\n", 13);
		return (0);
	}
	read(fd, taula, size->total);
	return (check_file(taula, size, data));
}

void	get_valor_i(char buf, struct s_mapa *size, struct s_val_inicial *data)
{
	if (size->total == 0)
		data->n_lineas = buf - '0';
	if (size->total == 1)
		data->c_buit = buf;
	if (size->total == 2)
		data->c_obstacle = buf;
	if (size->total == 3)
		data->c_ple = buf;
}

void	get_data(int fd, struct s_mapa *size, struct s_val_inicial *data )
{
	char	buf;
	int		flag;

	flag = 0;
	while (read(fd, &buf, 1) > 0)
	{
		if (size->total < 5)
			get_valor_i(buf, size, data);
		else
		{
			if (buf == '\n' && flag == 0)
			{
				size->linea = size->total - 5;
				flag = -1;
			}
	//		write (1, &buf, 1);
		}
		size->total++;
	}
}

void	open_file(char *argv, struct s_mapa *size, struct s_val_inicial *data)
{
	int	fd;
	int	check;

	size->total = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		write (1, "Map Error\n", 10);
	else
	{
		get_data(fd, size, data);
		close(fd);
		fd = open(argv, O_RDONLY);
		if (fd == -1)
			write (1, "Map Error\n", 10);
		else
		{
			check = get_array(fd, size, data);
			close(fd);
			if (check == 0)
				write (1, "Map Error\n", 10);
			//else
			//	get_array();
		}
	}
}

int	main(int argc, char **argv)
{
	int						i;
	t_val_inicial			data;
	t_mapa					size;	

	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			open_file(argv[i], &size, &data);
			i++;
			if (i < argc)
			{
				write (1, "\n", 1);
			}
		}
	}
}
