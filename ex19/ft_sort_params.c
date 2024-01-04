/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfidalgo <jfidalgo@student.42bar(...).com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:35:30 by jfidalgo          #+#    #+#             */
/*   Updated: 2024/01/04 20:53:34 by jfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putparam(char *param)
{
	while (*param)
	{
		write (1, &(*param), 1);
		param++;
	}
	write(1, "\n", 1);
}

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

int	is_greater(char *str, char *compare)
{
	if (compare == NULL)
		return (1);
	return (ft_strcmp (str, compare) > 0);
}

int	is_less(char *str, char *compare)
{
	if (compare == NULL)
		return (1);
	return (ft_strcmp (str, compare) < 0);
}

int	main(int argc, char *argv[])
{
	char	*last;
	char	*minor;
	char	*current;
	int		i;
	int		j;

	last = NULL;
	i = 2;
	while (i <= argc)
	{
		minor = NULL;
		j = 2;
		while (j <= argc)
		{
			current = argv[j - 1];
			if (is_greater (current, last) && is_less (current, minor))
				minor = current;
			j++;
		}
		putparam (minor);
		last = minor;
		i++;
	}
}
