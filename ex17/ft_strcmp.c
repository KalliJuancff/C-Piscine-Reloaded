/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:57:17 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 17:12:46 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	return (*s1 - *s2);
}

void	probar_strcmp(char *s1, char *s2)
{
	int	strcmp_value;
	int	ft_strcmp_value;

	strcmp_value = strcmp(s1, s2);
	ft_strcmp_value = ft_strcmp(s1, s2);
	printf("Comparando '%s' con '%s': ", s1, s2);
	printf("strcmp = %d, ", strcmp_value);
	printf("ft_strcmp = %d", ft_strcmp_value);
	printf("\n");
}

int	main(void)
{
	probar_strcmp("", "");
	probar_strcmp("GOTT", "");
	probar_strcmp("", "GOTT");
	probar_strcmp("GOTT", "GOTT");
	probar_strcmp("DIO", "DIO");
	probar_strcmp("GOT", "GOTT");
	probar_strcmp("GOTT", "GOT");
	probar_strcmp("DIO", "dio");
	probar_strcmp("dio", "DI");
}
