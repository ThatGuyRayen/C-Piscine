/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 01:30:10 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/03 13:20:25 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	parity;
	int	number;

	parity = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10;
		number += *str - 48;
		++str;
	}
	if (!(parity % 2))
		return (number);
	return (-number);
}

#include <stdio.h>
int	main(void)
{
	char *s = "   09";
	printf("%d\n",ft_atoi(s));
	return (0);
}
