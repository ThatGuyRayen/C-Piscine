/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelvaci <dhelvaci@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:16:50 by dhelvaci          #+#    #+#             */
/*   Updated: 2025/03/02 20:09:39 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	has_duplicates(int *row)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (row[i] == row[j] && i != j) 
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	fill_grid_with_permutations(int grid[4][4], 
					int permutations[24][4], 
					int permutation_indices[4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = permutations[permutation_indices[row]][col];
			col++;
		}
		row++;
	}
}

void	print_grid(int grid[4][4])
{
	char	c;
	int		row;
	int		col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	reverse_array(int *array, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = temp;
		i++;
	}
}

void	extract_column(int column[4], int grid[4][4], int column_index)
{
	column[0] = grid[0][column_index];
	column[1] = grid[1][column_index];
	column[2] = grid[2][column_index];
	column[3] = grid[3][column_index];
}
