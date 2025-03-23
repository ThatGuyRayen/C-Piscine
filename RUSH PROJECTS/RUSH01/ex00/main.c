/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajni <rrajni@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:18:24 by rrajni            #+#    #+#             */
/*   Updated: 2025/03/02 20:11:26 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	fill_grid_with_permutations(int grid[4][4], 
			int permutations[24][4], 
			int permutation_indices[4]);
void	print_grid(int grid[4][4]);

void	generate_all_permutations(int permutations[24][4]);
int		validate_grid(int grid[4][4], int *clues);

void	check_all_grid_permutations(int row_indices[4], int current_grid[4][4],
		int permutations[24][4], int clues[16])
{
	while (++row_indices[0] < 24) 
	{
		row_indices[1] = -1;
		while (++row_indices[1] < 24)
		{
			row_indices[2] = -1;
			while (++row_indices[2] < 24)
			{
				row_indices[3] = -1;
				while (++row_indices[3] < 24)
				{
					fill_grid_with_permutations(current_grid, 
						permutations, 
						row_indices);
					if (validate_grid(current_grid, clues) == 1)
					{
						print_grid(current_grid);
						return ;
					}
				}
			}
		}
	}
	write(1, "Error\n", 6);
}

void	initialize_solver(int clues[16])
{
	int	permutations[24][4];
	int	current_grid[4][4];
	int	row_indices[4];
	int	i;

	i = -1;
	while (++i < 4)
		row_indices[i] = -1;
	generate_all_permutations(permutations);
	check_all_grid_permutations(row_indices, current_grid, permutations, clues);
}

int	parse_input_char(int index, char **argv, int clues[16])
{
	if (index > 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (index % 2 == 0)
	{
		if (argv[1][index] >= '0' && argv[1][index] <= '9')
			clues[index / 2] = argv[1][index] - '0';
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	else
	{
		if (argv[1][index] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	index;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	index = -1;
	while (argv[1][++index] != '\0')
	{
		if (parse_input_char(index, argv, clues) == 1)
			return (1);
	}
	initialize_solver(clues);
	return (0);
}
