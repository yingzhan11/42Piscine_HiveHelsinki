/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:43:34 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/01/21 22:25:47 by ejaakkol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int grid[4][4], int cell, int clues[16])
{
	int	i;
	int	highest;
	int	visible_boxes;

	i = 0;
	highest = 0;
	visible_boxes = 0;
	if (cell / 4 == 3)
	{
		while (i <= 3)
		{
			if (grid[i][cell % 4] > highest)
			{
				highest = grid[i][cell % 4];
				visible_boxes++;
			}
			i++;
		}
		if (clues[cell % 4] != visible_boxes)
			return (1);
	}
	return (0);
}

int	check_col_down(int grid[4][4], int cell, int clues[16])
{
	int	i;
	int	highest;
	int	visible_boxes;

	i = 3;
	highest = 0;
	visible_boxes = 0;
	if (cell / 4 == 3)
	{
		while (i >= 0)
		{
			if (grid[i][cell % 4] > highest)
			{
				highest = grid[i][cell % 4];
				visible_boxes++;
			}
			i--;
		}
		if (clues[4 + cell % 4] != visible_boxes)
			return (1);
	}
	return (0);
}

int	check_row_left(int grid[4][4], int cell, int clues[16])
{
	int	i;
	int	highest;
	int	visible_boxes;

	i = 0;
	highest = 0;
	visible_boxes = 0;
	if (cell % 4 == 3)
	{
		while (i <= 3)
		{
			if (grid[cell / 4][i] > highest)
			{
				highest = grid[cell / 4][i];
				visible_boxes++;
			}
			i++;
		}
		if (clues[8 + cell / 4] != visible_boxes)
			return (1);
	}
	return (0);
}

int	check_row_right(int grid[4][4], int cell, int clues[16])
{
	int	i;
	int	highest_size;
	int	visible_towers;

	i = 3;
	highest_size = 0;
	visible_towers = 0;
	if (cell % 4 == 3)
	{
		while (i >= 0)
		{
			if (grid[cell / 4][i] > highest_size)
			{
				highest_size = grid[cell / 4][i];
				visible_towers++;
			}
			i--;
		}
		if (clues[12 + cell / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_cell(int grid[4][4], int cell, int clues[16])
{
	if (check_row_left(grid, cell, clues) == 1)
		return (1);
	if (check_row_right(grid, cell, clues) == 1)
		return (1);
	if (check_col_down(grid, cell, clues) == 1)
		return (1);
	if (check_col_up(grid, cell, clues) == 1)
		return (1);
	return (0);
}
