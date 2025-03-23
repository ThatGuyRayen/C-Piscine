/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_names.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:40:36 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/06 16:35:04 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *vh)
{
	while (*vh)
	{
		write(1, vh++, 1);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putchar(argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
