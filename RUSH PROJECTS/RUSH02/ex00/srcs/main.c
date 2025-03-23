/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:48:55 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/09 16:48:57 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "converter.h"
#include "ft_utils.h"

int	g_err = 0;

void	print_err(void)
{
	if (g_err == 1)
		write(2, "Dict Error\n", 11);
	if (g_err == 2)
		write(2, "Error\n", 6);
}

int	validate_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

char	*get_input_num(int ac, char **av, char **dict_path)
{
	if (ac == 2)
	{
		*dict_path = NULL;
		if (validate_arg(av[1]) == 0)
			return (av[1]);
	}
	if (ac == 3)
	{
		*dict_path = av[1];
		if (validate_arg(av[2]) == 0)
			return (av[2]);
	}
	g_err = 2;
	return (NULL);
}

int	main(int ac, char **av)
{
	char	*result_str;
	char	*input_num;
	char	*dict_path;
	int		i;

	input_num = get_input_num(ac, av, &dict_path);
	if (input_num != NULL)
		result_str = get_num_str(input_num, dict_path);
	if (g_err != 0)
	{
		print_err();
		free(result_str);
		return (-1);
	}
	i = 1;
	while (result_str[i])
	{
		write(1, &result_str[i], 1);
		i++;
	}
	free(result_str);
	return (0);
}
