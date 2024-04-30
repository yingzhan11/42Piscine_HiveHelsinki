/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:09:08 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/30 19:28:49 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		if (nb % 2 == 0)
			nb++;
		else
			nb = nb + 2;
	}
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	int	nb1;
	int	nb2;

	nb1 = 2147483643;
	nb2 = 16;
	printf("%d\n", ft_find_next_prime(nb1));
	printf("%d\n", ft_find_next_prime(nb2));
	return (0);
}

