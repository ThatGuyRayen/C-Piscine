/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:58:16 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:58:18 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

int		str_len(char *str);
void	append_space(char *dest, char *src);
char	*str_dup(char *src);
int		str_comp(char *s1, char *s2);
int		a_to_i(char *str);

#endif
