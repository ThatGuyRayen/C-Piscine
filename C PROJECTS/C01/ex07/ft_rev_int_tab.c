/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:24:56 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/21 12:00:40 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int str[5] = {1,2,3,4,5};
	ft_rev_int_tab(str , 5);
	for (int i = 0 ; i < 5; i++)
	{
		printf("%d",str[i]);
	}
	return (0);
}*/
