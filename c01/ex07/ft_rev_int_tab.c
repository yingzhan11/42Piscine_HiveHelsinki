/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:05:46 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/18 13:15:45 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	j;
	int	tab[6] = {1, 2, 3, 4, 5, 6};

	j = 0;
	ft_rev_int_tab(tab, 6);
	while (j < 6)
	{
		printf("%d", tab[j]);
		j++;
	}
	return (0);
}
*/
