/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:36 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:58:37 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_FILE_H
# define PARSE_FILE_H

# include "parse_file_utils.h"

int		count_lines(const char *path);
int		*get_line_sizes(const char *path);
int		read_lines(const char *path, char ***lines);

#endif
