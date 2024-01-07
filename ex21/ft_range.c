/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:48:19 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/07 10:01:33 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	result = malloc (sizeof(int) * (max - min + 1));
	i = min;
	while (i <= max)
	{
		result[i - min] = i;
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	int	*numbers;
	int	i;

	numbers = ft_range(30, 40);
	i = 30;
	while (i <= 40)
	{
		printf("%d\n", numbers[i - 30]);
		i++;
	}
	free (numbers);
}
*/
