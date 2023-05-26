/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:59:09 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/20 05:08:46 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && str[i - 1] != ' ')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ((str[i - 1] >= 32) && (str[i - 1] <= 47)))
			str[i] = str[i] - 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comment Tu vas ? 42Mots quArante-deUx; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
}*/
