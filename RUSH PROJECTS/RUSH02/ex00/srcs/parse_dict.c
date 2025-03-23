/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:49:20 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:51:08 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "parse_dict_utils.h"

extern int	g_err;

int	parse_start(int *i, char *s, char **num)
{
	*i = 0;
	if (extract_num(i, s, num) != 0)
	{
		return (1);
	}
	while (s[*i] == ' ')
		*i += 1;
	if (s[*i] != ':')
		return (1);
	*i += 1;
	while (s[*i] == ' ')
		*i += 1;
	return (0);
}

int	parse_str(char *s, char **num, char **val)
{
	int	i;
	int	j;

	if (parse_start(&i, s, num) != 0)
		return (1);
	*val = malloc(calc_val_len(i, s) + 2);
	j = 0;
	while (s[i] >= 32 && s[i] <= 126)
	{
		if (check_spaces(i, s))
			break ;
		if (s[i] != ' ' || (s[i] == ' ' && s[i - 1] != ' '))
		{
			(*val)[j] = s[i];
			j++;
		}
		i++;
	}
	(*val)[j] = 0;
	return (0);
}

int	parse_dict(char **arr, char ***keys, char ***vals)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	*keys = malloc(sizeof(char *) * (i + 1));
	*vals = malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (arr[i])
	{
		if (parse_str(arr[i], &(*keys)[i], &(*vals)[i]) != 0)
		{
			g_err = 1;
			return (1);
		}
		i++;
	}
	(*keys)[i] = 0;
	(*vals)[i] = 0;
	return (0);
}
