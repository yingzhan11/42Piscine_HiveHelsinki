/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:25:39 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/31 13:05:14 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	if (max - min > 2147483647)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int main(void)
{
	int min;
	int max;
	int *range;
	int	i;

	min = 21;
	max = 36;
	range = ft_range(min, max);
	if (range == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
