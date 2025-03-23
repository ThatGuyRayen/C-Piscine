/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:03 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:58:06 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H

# include "converter_utils.h"
# include "parse_dict.h"
# include "parse_file.h"

extern char	**global_nums;
extern char	**global_vals;

char	*get_num_str(char *str, const char *dict_file);
int		print_number(char *str, int flag, char *buffer);

#endif
