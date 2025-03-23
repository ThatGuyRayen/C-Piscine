/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:53:20 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/20 16:23:04 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_display(int num)
{
	int	i;
	int	j;

	if (num > 9)
	{
		i = num / 10;
		j = num % 10;
		ft_putchar (i + 48);
		ft_putchar (j + 48);
	}
	else 
	{
		ft_putchar('0');
		ft_putchar(num + 48);
	}
}

void	ft_print_comb2(void)
{
	int	one;
	int	two;

	one = 0;
	while (one <= 99)
	{
		two = one + 1;
		while (two <= 99)
		{
			ft_display(one);
			ft_putchar(' ');
			ft_display(two);
			if (one < 98 || two < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			two++;
		}
		one++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return(0);
} */
