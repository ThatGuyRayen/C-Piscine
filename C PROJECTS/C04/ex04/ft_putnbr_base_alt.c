/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_alt.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 02:54:57 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/27 02:55:05 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	parity = 0;
	int	number = 0;

	while ((*str >= 9 && *str <= 13) || *str == 32) 
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		++str;
	}
	if (parity % 2)
		return (-number);
	return (number);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int doublechar(char *symbol)
{
	int i = 0;
	int j;

	while (symbol[i])
	{
		j = i + 1;
		while (symbol[j])
		{
			if (symbol[i] == symbol[j])
				return 1;
			j++;
		}
		i++;
	}
	return 0;
}

void printnbr(long n, int basevalue, char *symbol)
{
	long nlong = n;

	if (nlong < 0)
	{
		nlong = -nlong;
		ft_putchar('-');
	}
	if (nlong >= basevalue)
		printnbr(nlong / basevalue, basevalue, symbol);
	ft_putchar(symbol[nlong % basevalue]);
}

void ft_putnbr_base(int nbr, char *base)
{
	int basevalue = 0;

	while (base[basevalue])
	{
		if (base[basevalue] == '+' || base[basevalue] == '-')
			return;  // Invalid base
		++basevalue;
	}
	if (basevalue < 2)
		return;  // Base must have at least two characters

	if (doublechar(base))
		return;  // Base must not contain duplicate characters

	printnbr(nbr, basevalue, base);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int n = ft_atoi(argv[1]);
		char *basesymbol = argv[2];
		ft_putnbr_base(n, basesymbol);
	}
	return (0);
}

