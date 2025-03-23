/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:40:11 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:42:53 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_utils.h"
#include "converter_utils.h"
#include "parse_file.h"
#include "parse_dict.h"

int	print_number(char *str, int flag, char *buffer);

char		**global_nums;
char		**global_vals;
extern int	g_err;

int	print_under_100(char *str, int flag, char *buffer)
{
	char	*temp_str;
	int		num;
	int		total;

	num = a_to_i(str);
	if (num <= 20 || num % 10 == 0)
	{
		if (flag)
			append_space(buffer, get_val(str, global_nums, global_vals));
		return (str_len(get_val(str, global_nums, global_vals)) + 1);
	}
	else if (num <= 100)
	{
		total = 0;
		temp_str = str_dup(str);
		temp_str[1] = '0';
		total += print_number(temp_str, flag, buffer);
		total += print_number(str + 1, flag, buffer);
		free(temp_str);
		return (total);
	}
	return (0);
}

int	print_over_100(char *str, int flag, char *buffer)
{
	int		total;
	char	*mag_num;
	char	*mag_str;

	total = 0;
	mag_num = get_mag_num(str);
	total += print_number(mag_num, flag, buffer);
	mag_str = get_val(get_mag(str), global_nums, global_vals);
	if (flag)
		append_space(buffer, mag_str);
	total += print_number(str + str_len(mag_num), flag, buffer);
	total += str_len(mag_str) + 1;
	return (total);
}

int	print_number(char *str, int flag, char *buffer)
{
	int		len;

	while (str[0] == '0')
		str++;
	if (str[0] == 0)
		return (0);
	len = str_len(str);
	if (len <= 2)
		return (print_under_100(str, flag, buffer));
	else
		return (print_over_100(str, flag, buffer));
	return (0);
}

char	*get_num_str(char *str, const char *dict_file)
{
	char	*buffer;
	int		len;
	int		i;
	char	**dict_content;

	if (read_lines(dict_file, &dict_content) != 0
		|| parse_dict(dict_content, &global_nums, &global_vals) != 0)
	{
		g_err = 1;
		return (0);
	}
	i = 0;
	if (all_zeros(str) == 0)
		len = str_len(get_val("0", global_nums, global_vals));
	else
		len = print_number(str, 0, "");
	buffer = malloc(len + 1);
	i = -1;
	while (i++ < len)
		buffer[i] = 0;
	if (all_zeros(str) == 0)
		append_space(buffer, get_val("0", global_nums, global_vals));
	else
		print_number(str, 1, buffer);
	return (buffer);
}
