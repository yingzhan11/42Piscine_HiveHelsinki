/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_inputs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:42:55 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/01/21 20:52:48 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	if_valid_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '4') || str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}

int	if_valid_input(int argc, char **argv)
{
	char	*str;

	str = argv[1];
	if (argc != 2)
		return (0);
	if (ft_strlen(str) != 31)
		return (0);
	if (if_valid_number(str) == 0)
		return (0);
	return (1);
}

void	convert_input(char *str, int *nbr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		if (str[i] >= '1' && str[i] <= '4')
		{
			nbr[j] = str[i] - '0';
			i++;
			j++;
		}
	}
}

void	print_map(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(grid[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
