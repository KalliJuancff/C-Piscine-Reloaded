/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:17:36 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 12:42:32 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	value;

	if (nb == 0)
		return (1);
	value = 1;
	while (nb >= 2)
	{
		value *= nb;
		nb--;
	}
	return (value);
}

/*
int	main(void)
{
	for (int i = -1; i <= 10; i++)
		printf("Factorial de %d: %d\n", i, ft_iterative_factorial(i));
}
*/
