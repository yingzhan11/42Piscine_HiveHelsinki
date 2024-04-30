/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:22:36 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/31 13:06:40 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (max - min > 2147483647)
	{
		*range = NULL;
		return (-1);
	}
	size = (int *)malloc(sizeof(int) * (max - min));
	if (size == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = size;
	i = 0;
	while (max > min)
		size[i++] = min++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	size;
	int	i;

	min = 19;
	max = 21;
	size = ft_ultimate_range(&range, min, max);
	if (size == 0 || size == -1)
	{
		printf("%d\n", size);
		return (0);
	}
	i = 0;
	printf("%d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
