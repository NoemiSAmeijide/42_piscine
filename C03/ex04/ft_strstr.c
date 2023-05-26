/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 03:57:45 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/18 17:54:37 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find(int aux, char *str, char *to_find)
{
	int	j;
	int	end;

	end = 0;
	j = 0;
	while (to_find[j] != '\0' && end == 0)
	{
		if (str[aux] == to_find[j])
		{
			aux++;
			j++;
			if (to_find[j] == '\0')
				end = -1;
		}
		else
			end = -2;
	}
	return (end);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	end;
	int	result;

	end = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0' && end != -1)
		{
			if (str[i] == to_find[0])
			{
				result = i;
				end = ft_find(i, str, to_find);
			}
			i++;
		}
	}
	if (end == -1)
		return (&str[result]);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%s\n", ft_strstr("patata", "tata"));
	printf ("%s", strstr("patata", "tata"));
}
#include <stdio.h>
#include <string.h>
*/
