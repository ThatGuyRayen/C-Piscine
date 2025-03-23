/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:11 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:58:12 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_UTILS_H
# define CONVERTER_UTILS_H

extern int	g_err;

char	*get_val(char *key, char **nums, char **vals);
char	*get_mag(char *str);
char	*get_mag_num(char *str);
int		all_zeros(char *str);

#endif
