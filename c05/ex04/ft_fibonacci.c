/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:04:05 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/24 16:28:05 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	f0;
	int	f1;
	int	fn;

	f0 = 0;
	f1 = 1;
	fn = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (f0);
	}
	if (index == 1)
	{
		return (f1);
	}
	if (index >= 2)
	{
		fn = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (fn);
}
/*
#include <stdio.h>
int	main(void)
{
	int	index;

	index = -1;
	printf("%d\n", ft_fibonacci(index));
	return (0);
}
*/
