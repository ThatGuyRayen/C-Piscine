/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:06:28 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/02 05:24:46 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	n--;
	while (*s1 && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[] = "hello";
	char str2[] = "hellofskdfd";
	int	temp;

	temp =  ft_strncmp (str1, str2, 6);
	printf("%d\n",temp);
	printf("%d",strncmp(str1, str2,6));
	return (0);

} */
