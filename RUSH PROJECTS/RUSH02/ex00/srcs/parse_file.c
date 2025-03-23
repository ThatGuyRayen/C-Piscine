/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:52:16 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:53:12 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "parse_file_utils.h"

int	count_lines(const char *path)
{
	int		fd;
	char	c;
	int		i;
	int		line_cnt;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	c = 0;
	i = 0;
	line_cnt = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			i = -1;
		if (i == 0)
			line_cnt++;
		i++;
	}
	close(fd);
	return (line_cnt);
}

int	*get_line_sizes(const char *path)
{
	int		fd;
	int		*sizes;

	sizes = malloc(sizeof(int) * (1 + count_lines(path)));
	if (!sizes)
		return (NULL);
	sizes[0] = count_lines(path);
	fd = open(path, O_RDONLY);
	if (fd == -1 || sizes[0] == -1)
		return (NULL);
	if (!get_lens_loop(fd, sizes))
		return (NULL);
	close(fd);
	return (sizes);
}

int	read_lines(const char *path, char ***lines)
{
	int		fd;
	int		*sizes;
	char	*def_path;

	def_path = "numbers.dict";
	if (!path)
		path = def_path;
	sizes = get_line_sizes(path);
	fd = open(path, O_RDONLY);
	if (!sizes || fd == -1)
		return (-1);
	*lines = malloc(sizeof(char *) * (sizes[0] + 1));
	if (!*lines)
		return (-1);
	if (process_file(fd, sizes, lines) == -1)
		return (-1);
	free(sizes);
	close(fd);
	return (0);
}
