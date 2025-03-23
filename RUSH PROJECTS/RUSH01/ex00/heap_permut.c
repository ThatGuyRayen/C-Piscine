/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_permut.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:12:34 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/02 20:15:52 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	copy_permutations(int source[24][4], int destination[24][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 4)
		{
			destination[i][j] = source[i][j];
			j++;
		}
		i++;
	}
}

void	add_permutation(const int *v, t_permutation_data *data)
{
	data->all_permutations[data->permutation_count][0] = v[0];
	data->all_permutations[data->permutation_count][1] = v[1];
	data->all_permutations[data->permutation_count][2] = v[2];
	data->all_permutations[data->permutation_count][3] = v[3];
	data->permutation_count++;
}

void	generate_permutations(int c[], int n, t_permutation_data *data)
{
	int	i;

	if (n == 1)
		add_permutation(c, data);
	else
	{
		i = 0;
		while (i < n)
		{
			generate_permutations(c, n - 1, data);
			if (n % 2 == 1)
				swap(&c[0], &c[n - 1]);
			else
				swap(&c[i], &c[n - 1]);
			i++;
		}
	}
}

void	generate_all_permutations(int permutations[24][4])
{
	t_permutation_data	data;
	int					initial_array[4];

	initial_array[0] = 1;
	initial_array[1] = 2;
	initial_array[2] = 3;
	initial_array[3] = 4;
	data.permutation_count = 0;
	generate_permutations(initial_array, 4, &data);
	copy_permutations(data.all_permutations, permutations);
}
