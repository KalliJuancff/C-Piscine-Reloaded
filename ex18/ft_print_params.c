/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:41:14 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 17:58:25 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	putparam(char *param)
{
	while (*param)
	{
		ft_putchar(*param);
		param++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	char	*param;
	int		i;

	if (argc > 1)
	{
		i = 2;
		while (i <= argc)
		{
			param = argv[i - 1];
			putparam(param);
			i++;
		}
	}
}
