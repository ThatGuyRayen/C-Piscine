/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:40:02 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/04 18:22:29 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*arr;
	int	counter;

	i = min;
	j = 0;
	counter = max - min;
	if (min >= max)
		return (NULL);
	arr = (int *) malloc (counter * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < max)
	{
		arr[j] = min;
		j++;
		i++;
		min++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ans;
	int	i;

	i = 0;
	ans = ft_range( 1 , 5 );
	while (ans[i])
	{
		printf("%d,",ans[i]);
		i++;
	}
	free(ans);
	return (0);
}*/
