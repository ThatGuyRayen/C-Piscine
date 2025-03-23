/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:24 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:58:25 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_DICT_H
# define PARSE_DICT_H

# include "parse_dict_utils.h"

extern int	g_err;

int		parse_start(int *i, char *s, char **num);
int		parse_str(char *s, char **num, char **val);
int		parse_dict(char **arr, char ***keys, char ***vals);

#endif
