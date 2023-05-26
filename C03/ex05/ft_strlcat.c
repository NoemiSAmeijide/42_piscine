/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:50:45 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/20 15:44:36 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i + 1 < size)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	while (src[i - j])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[20] = "Hola, ";
	char src[] = "mundo!";
	unsigned int size = 0;
	unsigned int result;

	result = ft_strlcat(dest, src, size);
	printf("Cadena concatenada: %s\n", dest);
	printf("Longitud total: %u\n", result);

	return (0);
}*/
