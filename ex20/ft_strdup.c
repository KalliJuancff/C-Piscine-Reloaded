/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:16:47 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/07 21:32:05 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	value;

	value = 0;
	while (str[value] != '\0')
		value++;
	return (value);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	result = malloc(ft_strlen(src) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int	main(void)
{
	char	*dup;

	dup = ft_strdup("GOTT");
	printf("%s", dup);
	free(dup);
}
*/
