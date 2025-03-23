/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:24:21 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/21 01:34:15 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>
int	main(void)
{
	int a = 22;
	int b = 33;
	ft_swap(&a,&b);
	printf("%d\n%d",a , b);
	return (0);
}*/
