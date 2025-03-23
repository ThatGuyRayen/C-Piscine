/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:37:52 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/12 12:40:08 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

int	strllen(char *str);
void	ft_strrcpy(char *dest, char *src);
struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif
