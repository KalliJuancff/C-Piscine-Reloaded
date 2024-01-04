/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:21:47 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 16:27:18 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	value;

	value = 0;
	while (str[value] != '\0')
		value++;
	return (value);
}

/*
int	main(void)
{
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen("GOTT"));
	printf("%d\n", ft_strlen("Dio"));
}
*/
