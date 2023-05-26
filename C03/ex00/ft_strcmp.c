/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosilves <nosilves@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:39:16 by nosilves          #+#    #+#             */
/*   Updated: 2023/04/13 01:21:59 by nosilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (s1[i] != '\0' && a == 0)
	{
		if (s1[i] == s2[i])
			i++;
		else
			a++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
	{
		if (s1[i] > s2[i])
			return (1);
		else
			return (-1);
	}
}

/*int main(void)
 * #include <string.h>
{
    printf("%d", ft_strcmp("Hallo", "Hello"));
    printf("%d", strcmp("Hallo", "Hello"));
}
*/
