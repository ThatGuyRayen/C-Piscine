/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:38:45 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/21 01:49:44 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	q;
	int	r;

	q = a / b;
	*div = q;
	r = a % b;
	*mod = r;
}
/*#include <stdio.h>
int	main(void)
{
	int a =72;
	int b =10;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d, Modulus: %d\n", div, mod);
	return(0);
}*/
