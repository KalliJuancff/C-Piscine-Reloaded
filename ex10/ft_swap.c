/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:43:53 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 11:49:55 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 5;
	printf ("X: %d; Y: %d\n", x, y);
	ft_swap(&x, &y);
	printf ("X: %d; Y: %d\n", x, y);
}
*/
