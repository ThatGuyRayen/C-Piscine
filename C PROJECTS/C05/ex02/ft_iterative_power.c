/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:17:54 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/05 10:33:42 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power >= 1)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int nb = atoi(argv[1]);
	int power = atoi(argv[2]);
	printf ("%d", ft_iterative_power(nb, power));
	return (0);
}*/
