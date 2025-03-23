/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:31:41 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/02 21:01:39 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

int		has_duplicates(int *row);
void	fill_grid_with_permutations(int grid[4][4], 
			int permutations[24][4],
			int permutation_indices[4]);
void	print_grid(int grid[4][4]);
void	reverse_array(int *array, int size);
void	extract_column(int column[4], int grid[4][4], int column_index);
typedef struct s_permutation_data
{
	int	all_permutations[24][4];
	int	permutation_count;
}	t_permutation_data;
void	swap(int *x, int *y);
void	copy_permutations(int source[24][4], int destination[24][4]);
void	add_permutation(const int *v, t_permutation_data *data);
void	generate_permutations(int c[], int n, t_permutation_data *data);
void	generate_all_permutations(int permutations[24][4]);
void	check_all_grid_permutations(int row_indices[4], int current_grid[4][4],
			int permutations[24][4], int clues[16]);
void	initialize_solver(int clues[16]);
int		parse_input_char(int index, char **argv, int clues[16]);
int		check_visibility(int *row, int expected_visible);
int		check_visibility_reverse(int *row, int expected_visible);
int		validate_rows(int grid[4][4], int *clues);
int		validate_columns(int grid[4][4], int *clues);
int		validate_grid(int grid[4][4], int *clues);

#endif
