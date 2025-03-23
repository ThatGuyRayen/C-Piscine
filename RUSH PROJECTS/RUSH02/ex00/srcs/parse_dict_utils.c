/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:39:21 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:51:55 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*copy_substr(char *s, int start, int end)
{
	int		i;
	char	*res;

	res = malloc(end - start + 2);
	i = 0;
	while (start <= end)
		res[i++] = s[start++];
	res[i] = 0;
	return (res);
}

int	extract_num(int *i, char *s, char **num)
{
	int	start;

	if (s[*i] == '+' || s[*i] == '-')
		(*i)++;
	else if (s[*i] < '0' || s[*i] > '9')
		return (1);
	start = *i;
	while (s[*i] >= '0' && s[*i] <= '9')
		(*i)++;
	*num = copy_substr(s, start, *i - 1);
	return (0);
}

int	check_spaces(int i, char *s)
{
	while (s[i])
	{
		if (s[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	calc_val_len(int i, char *s)
{
	int	len;

	len = 0;
	while (s[i] >= 32 && s[i] <= 126)
	{
		if (check_spaces(i, s))
			break ;
		if (s[i] != ' ')
			len++;
		else if (s[i] == ' ' && s[i - 1] != ' ' && s[i - 1] != ':')
			len++;
		i++;
	}
	return (len);
}
