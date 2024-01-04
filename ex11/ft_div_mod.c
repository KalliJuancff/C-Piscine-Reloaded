/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:51:50 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 12:14:17 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	divisor;
	int	dividendo;
	int	cociente;
	int	resto;

	divisor = 25;
	dividendo = 2;
	ft_div_mod(divisor, dividendo, &cociente, &resto);
	printf("Divisor: %d, ", divisor);
	printf("Dividendo: %d, ", dividendo);
	printf("Cociente: %d, ", cociente);
	printf("Resto: %d\n", resto);
	printf("\n");
	return (0);
}
*/
