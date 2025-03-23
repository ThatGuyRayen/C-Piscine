/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:30 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:58:32 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_DICT_UTILS_H
# define PARSE_DICT_UTILS_H

char	*copy_substr(char *s, int start, int end);
int		extract_num(int *i, char *s, char **num);
int		check_spaces(int i, char *s);
int		calc_val_len(int i, char *s);

#endif
