/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:46:33 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/20 16:59:50 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0 || n == '\0')
	{
		write (1, "P", 1);
	}
	else
		write (1, "N", 1);
}

/*int 	main(void)
{	
	ft_is_negative(3);
	ft_is_negative('\0');
	ft_is_negative(NULL);
	ft_is_negative(0);
	ft_is_negative(-7);
	return (0);
}*/
