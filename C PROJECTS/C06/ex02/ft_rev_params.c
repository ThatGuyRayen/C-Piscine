/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:27:19 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/06 16:36:45 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				write (1, &argv[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i--;
		}
	}
	return (0);
}
