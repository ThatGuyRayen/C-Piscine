/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:17:52 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/20 16:22:25 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (! (a == 55 && b == 56 && c == 57))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int     main(void)
{
        ft_print_comb();
        return (0);
}
*/
