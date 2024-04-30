/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:09:04 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/24 18:50:28 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb1;
	int	nb2;

	nb1 = 2147395600;
	nb2 = 4;
	printf("%d\n", ft_sqrt(nb1));
	printf("%d\n", ft_sqrt(nb2));
	return (0);
}
*/
