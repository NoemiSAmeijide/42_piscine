/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 02:01:12 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/13 05:45:00 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
 * int main(void)
{
    char heo[50]="Heo";
    char heo2[50]="Heo";
    printf("%s\n", ft_strcat(heo, "Hella"));
    printf("%s", strcat(heo2, "Hella"));
}

#include <stdio.h>
#include <string.h> */
