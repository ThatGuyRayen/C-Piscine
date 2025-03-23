/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:52:37 by tpandya           #+#    #+#             */
/*   Updated: 2025/02/22 18:09:21 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printing_row_col(int x, char start, char middle, char end)
{
	int	col;

	if (x <= 0)
		return ;
	col = 1;
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar(start);
		}
		else if (col == x)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (row <= y)
	{
		if (row == 1) 
			ft_printing_row_col(x, 'A', 'B', 'C');
		else if (row == y) 
			ft_printing_row_col(x, 'C', 'B', 'A');
		else
			ft_printing_row_col(x, 'B', ' ', 'B');
		row++;
	}
}
