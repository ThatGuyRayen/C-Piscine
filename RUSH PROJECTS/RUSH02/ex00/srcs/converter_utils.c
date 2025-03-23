/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:45:48 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:47:06 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_utils.h"

extern int	g_err;

char	*get_val(char *key, char **nums, char **vals)
{
	int		i;
	char	*empty;

	i = 0;
	while (nums[i])
	{
		if (str_comp(nums[i], key) == 0)
			return (vals[i]);
		i++;
	}
	g_err = 1;
	empty = (char *)malloc(1);
	empty[0] = 0;
	return (empty);
}

char	*get_mag(char *str)
{
	int		n;
	int		len;
	char	*mag;

	n = str_len(str);
	len = str_len(str);
	if (len >= 4)
		while ((n - 1) % 3 != 0)
			n--;
	else
		n = len;
	mag = malloc(n + 1);
	mag[0] = '1';
	mag[n] = '\0';
	while (--n > 0)
		mag[n] = '0';
	return (mag);
}

char	*get_mag_num(char *str)
{
	int		n;
	int		i;
	int		len;
	char	*num_str;

	len = str_len(str);
	if (len >= 4)
	{
		n = (str_len(str) - 1) % 3 + 1;
		num_str = malloc(n + 1);
		i = 0;
		while (i < n)
		{
			num_str[i] = str[i];
			i++;
		}
	}
	if (len <= 3)
	{
		n = 2;
		num_str = malloc(n);
		num_str[0] = str[0];
	}
	num_str[n] = '\0';
	return (num_str);
}

int	all_zeros(char *str)
{
	int	i;

	i = -1;
	while (i++, str[i] != 0)
		if (str[i] != '0')
			return (1);
	return (0);
}
