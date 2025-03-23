/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:18:58 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/24 16:54:45 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/*#include <stdio.h>
int	main(void)
{
	char stringnew[] = "HIIILOOO";
	char stringold[] = "Helooowwwww";
	ft_strcpy(stringnew, stringold);
	puts(stringnew);
	return (0);
} */
