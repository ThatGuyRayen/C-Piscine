/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:11:43 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/02 19:27:02 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	reverse_array(int *array, int size);
void	extract_column(int column[4], int grid[4][4], int column_index);

int		has_duplicates(int *row);

int	check_visibility(int *row, int expected_visible)
{
	int	visible_count;
	int	tallest_so_far;
	int	i;

	visible_count = 1;
	tallest_so_far = row[0];
	i = 1;
	while (i < 4)
	{
		if (row[i] > tallest_so_far)
		{
			visible_count++;
			tallest_so_far = row[i];
		}
		i++;
	}
	if (visible_count == expected_visible && has_duplicates(row) == 0)
		return (1);
	else
		return (0);
}

int	check_visibility_reverse(int *row, int expected_visible)
{
	int	result;

	reverse_array(row, 4);
	result = check_visibility(row, expected_visible);
	reverse_array(row, 4);
	return (result);
}

int	validate_rows(int grid[4][4], int *clues)
{
	if (check_visibility(grid[0], clues[8]) == 0 
		|| check_visibility_reverse(grid[0], clues[12]) == 0)
		return (0);
	if (check_visibility(grid[1], clues[9]) == 0 
		|| check_visibility_reverse(grid[1], clues[13]) == 0)
		return (0);
	if (check_visibility(grid[2], clues[10]) == 0 
		|| check_visibility_reverse(grid[2], clues[14]) == 0)
		return (0);
	if (check_visibility(grid[3], clues[11]) == 0 
		|| check_visibility_reverse(grid[3], clues[15]) == 0)
		return (0);
	return (1);
}

int	validate_columns(int grid[4][4], int *clues)
{
	int	column[4]; 

	extract_column(column, grid, 0);
	if (check_visibility(column, clues[0]) == 0 
		|| check_visibility_reverse(column, clues[4]) == 0)
		return (0);
	extract_column(column, grid, 1);
	if (check_visibility(column, clues[1]) == 0 
		|| check_visibility_reverse(column, clues[5]) == 0)
		return (0);
	extract_column(column, grid, 2);
	if (check_visibility(column, clues[2]) == 0 
		|| check_visibility_reverse(column, clues[6]) == 0)
		return (0);
	extract_column(column, grid, 3);
	if (check_visibility(column, clues[3]) == 0 
		|| check_visibility_reverse(column, clues[7]) == 0)
		return (0);
	return (1);
}

int	validate_grid(int grid[4][4], int *clues)
{
	if (validate_rows(grid, clues) == 0 || validate_columns(grid, clues) == 0)
		return (0);
	return (1);
}
