/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:42:06 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/16 19:23:29 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	readdic(..)
{
	
}

int	ft_check_number(char *argv)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			str[i] = '\0';
			return (i);
	}
	return (i);
}

int main(int argc, char **argv)
{
	int		n_digits;
	char	*file;

	if (argc == 2)
	{
		n_digits = ft_check_number(argv[1]);
		if (n_digits > 0 && n_digits < 11)
		{
			file = (char)
		}
		else
			write (1, "Error\n", 6);
	}
	else if (argc == 3)
	{}
	else
		write (1, "Error\n", 6);
}
