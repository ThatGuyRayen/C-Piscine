/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:53:37 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:53:39 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	*get_lens_loop(int fd, int *sizes)
{
	char	c;
	int		i;
	int		idx;

	c = 0;
	i = 0;
	idx = -1;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			if (i >= 0 && idx >= 0)
				sizes[idx + 1] = i;
			i = -1;
		}
		if (i == 0)
			idx++;
		i++;
	}
	return (sizes);
}

int	read_char(char c, int *ptr[2], int *sizes, char ***lines)
{
	if (c == '\n')
	{
		if (*ptr[0] >= 0)
			(*lines)[*ptr[1]][*ptr[0]] = 0;
		*ptr[0] = -1;
	}
	if (*ptr[0] == 0)
	{
		(*ptr[1])++;
		(*lines)[*ptr[1]] = malloc(*sizes + 1);
		if (!(*lines)[*ptr[1]])
			return (-1);
	}
	if (*ptr[0] >= 0)
		(*lines)[*ptr[1]][*ptr[0]] = c;
	(*ptr[0])++;
	return (0);
}

int	process_file(int fd, int *sizes, char ***lines)
{
	char	c;
	int		i;
	int		idx;
	int		ret;
	int		*ptr[2];

	c = 0;
	i = 0;
	idx = -1;
	while (read(fd, &c, 1))
	{
		ptr[0] = &i;
		ptr[1] = &idx;
		ret = read_char(c, ptr, sizes, lines);
		if (ret == -1)
			return (-1);
	}
	(*lines)[idx + 1] = NULL;
	return (0);
}
