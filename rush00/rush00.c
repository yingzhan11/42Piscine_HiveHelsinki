/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:51:29 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/14 13:51:42 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_columns(int column, int row, int x, int y)
{
	while (column <= x)
	{
		if ((column == 1 && row == 1) || (column == x && row == 1)
			|| (column == 1 && row == y) || (column == x && row == y))
		{
			ft_putchar('o');
		}
		else if (row == 1 || row == y)
		{
			ft_putchar('-');
		}
		else if (column == 1 || column == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		column++;
	}
}

void	rush00(int x, int y)
{
	int	column;
	int	row;

	column = 1;
	row = 1;
	while (row <= y && x > 0)
	{
		write_columns(column, row, x, y);
		row++;
		ft_putchar('\n');
	}
}
