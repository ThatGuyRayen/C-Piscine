/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:27:44 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/05 10:34:27 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main (int argc, char **argv)
{
	int nb = atoi(argv[1]);
	int power = atoi(argv[2]);
	printf("%d:", ft_recursive_power(nb, power));

	return (0);
}*/
