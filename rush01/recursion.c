/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:44:38 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/01/21 22:08:54 by ejaakkol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_cell(int grid[4][4], int cell, int clues[16]);

int	check_adjacent_cell(int grid[4][4], int cell, int num)
{
	int	i;

	i = 0;
	while (i < cell / 4)
	{
		if (grid[i][cell % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < cell % 4)
	{
		if (grid[cell / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	puzzle_solver(int grid[4][4], int clues[16], int cell)
{
	int	num;

	if (cell == 16)
		return (1);
	num = 1;
	while (num <= 4)
	{
		if (check_adjacent_cell(grid, cell, num) == 0)
		{
			grid[cell / 4][cell % 4] = num;
			if (check_cell(grid, cell, clues) == 0)
			{
				if (puzzle_solver(grid, clues, cell + 1) == 1)
					return (1);
			}
			else
			{
				grid[cell / 4][cell % 4] = 0;
			}
		}
		num++;
	}
	return (0);
}
