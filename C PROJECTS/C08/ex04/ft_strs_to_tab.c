/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:20:58 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/12 11:35:35 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	strllen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strrcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	str = (struct s_stock_str *) malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str[i].size = strllen(av[i]);
		str[i].str = av[i];
		str[i].copy = (char *) malloc((str[i].size + 1) * sizeof(char));
		if (!str[i].copy)
		{
			while (--i)
				free(str[i].copy);
			free(str);
			return (NULL);
		}
		ft_strrcpy(str[i].copy, av[i]);
		i++;
	}
	str[i].str = NULL;
	return (str);
}
