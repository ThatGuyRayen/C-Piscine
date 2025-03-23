/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:49 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:58:50 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_FILE_UTILS_H
# define PARSE_FILE_UTILS_H

int		*get_lens_loop(int fd, int *sizes);
int		read_char(char c, int *ptr[2], int *sizes, char ***lines);
int		process_file(int fd, int *sizes, char ***lines);

#endif
