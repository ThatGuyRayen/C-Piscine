/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 02:05:09 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/21 02:12:43 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
/*#include <stdio.h>
int	main(void)
{
	int temp;
	char str[] = "Hello World";
	temp =	ft_strlen(str);
	printf("The number of Characters in our string is: %d",temp);
	return 0;
}*/
