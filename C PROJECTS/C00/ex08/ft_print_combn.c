/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:25:30 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/20 20:21:51 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_1(char *combn, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		combn[i] = '0' + i;
		i++;
	}
}

void	ft_2(char *combn, int n)
{
	write (1, combn, n);
}

void	ft_3(char *combn, int n, int *i)
{
	*i = n - 1;
	while (*i >= 0 && combn [*i] == '9' - (n - 1 - *i))
		(*i)--;
}

void	ft_4(char *combn, int n, int i)
{
	int	j;

	j = i + 1;
	combn [i]++;
	while (j < n)
	{
		combn [j] = combn [j - 1] + 1;
		j++;
	}
}

void	ft_print_combn(int n)
{
	char	combn[10];
	int		i;

	if (n < 1 || n > 9)
		return ;
	ft_1(combn, n);
	while (1)
	{
		ft_2(combn, n);
		if (combn[0] == '9' - (n - 1))
			break ;
		write (1, ", ", 2);
		ft_3(combn, n, &i);
		if (i < 0)
			break ;
		ft_4(combn, n, i);
	}
}

/*int	main(void)
{
	ft_print_combn(3);
	return(0);
}*/
