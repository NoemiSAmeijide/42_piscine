/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:32:21 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/15 12:12:50 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
					i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str = "auygflhfDS324GKWSGH";

	printf("%d", ft_str_is_uppercase(str));
}*/
