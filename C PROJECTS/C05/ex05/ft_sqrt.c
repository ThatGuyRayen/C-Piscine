/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:33:31 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/05 11:12:27 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long int	mid;
	long long int	square;
	long long int	ans;
	int				s;
	int				e;

	s = 0;
	e = nb;
	ans = -1;
	mid = s + (e - s) / 2;
	while (s <= e)
	{
		square = mid * mid;
		if (square == nb)
			return (mid);
		else if (square < nb)
		{
			ans = mid;
			s = mid + 1;
		}
		else
			e = mid - 1;
		mid = s + (e - s) / 2;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);	
	int nb = atoi(argv[1]);
	printf("%d:",ft_sqrt(nb));
	return (0);
}*/
