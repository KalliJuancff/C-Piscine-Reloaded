/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:50:39 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 14:38:52 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	counter;
	int	even_number;

	counter = 0;
	even_number = 1;
	while (nb >= even_number)
	{
		nb -= even_number;
		counter++;
		even_number += 2;
	}
	if (nb == 0)
		return (counter);
	return (0);
}

/*
void	mostrar_raiz_cuadrada(int n)
{
	printf("Raíz cuadrada de %d: %d\n", n, ft_sqrt(n));
}

int	main(void)
{
	mostrar_raiz_cuadrada(-2147483648);
	mostrar_raiz_cuadrada(-1000);
	mostrar_raiz_cuadrada(-1);
	mostrar_raiz_cuadrada(0);
	mostrar_raiz_cuadrada(2);
	mostrar_raiz_cuadrada(16);		// 4
	mostrar_raiz_cuadrada(64);		// 8
	mostrar_raiz_cuadrada(121);		// 11
	mostrar_raiz_cuadrada(144);		// 12
	mostrar_raiz_cuadrada(625);		// 25
	mostrar_raiz_cuadrada(2147395600);	// 46340
	mostrar_raiz_cuadrada(2147483647);
}
*/
