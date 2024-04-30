/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:35:50 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/01/21 22:29:26 by ejaakkol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		if_valid_input(int argc, char **argv);
void	ft_putstr(char *str);
void	convert_input(char *str, int *nbr);
int		puzzle_solver(int grid[4][4], int clues[16], int cell);
void	print_map(int grid[4][4]);
void	initialize_grid(int array[4][4], int value);

int	main(int argc, char **argv)
{
	int		grid[4][4];	
	char	*input_str;
	int		*clues;

	initialize_grid(grid, 0);
	clues = malloc(64);
	if (if_valid_input(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	input_str = argv[1];
	convert_input(input_str, clues);
	if (puzzle_solver(grid, clues, 0) == 1)
	{
		print_map(grid);
	}
	else
	{
		ft_putstr("Error\n");
	}
	free(clues);
	return (0);
}
