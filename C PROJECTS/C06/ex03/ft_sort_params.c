/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:18:54 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/08 13:43:19 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sorter(int size, char **ourstring)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < size -1)
	{
		j = 1;
		while (j < size - i)
		{
			if ((ft_strcmp(ourstring[j], ourstring[j + 1])) > 0)
			{
				temp = ourstring[j];
				ourstring[j] = ourstring[j + 1];
				ourstring[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
		sorter (argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
