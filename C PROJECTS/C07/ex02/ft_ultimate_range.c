/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:03:48 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/11 17:23:00 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *) malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		arr[j] = i;
		j++;
		i++;
	}
	*range = arr;
	return (max - min);
}
/*
#include <stdio.h>
int main(void)
{
    int *range;
    int min = -5;
    int max = -10;
    int i;
    int size;

    size = ft_ultimate_range(&range, min, max);
    
    if (size == -1)
    {
        printf("Memory allocation failed!\n");
    }
    else if (range == NULL)
    {
        printf("Range is NULL (min >= max).\n");
    }
    else
    {
        printf("Range: ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");
    }

    // Free the allocated memory
    free(range);

    return 0;
}
*/
