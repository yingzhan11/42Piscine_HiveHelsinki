/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:03:36 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/24 14:52:34 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
	else if (nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	test1;
	int	test2;
	int	test3;

	test1 = 2147483647;
	test2 = -2147483648;
	test3 = 2345;

	printf("input: %d\n", test1);
	ft_putnbr(test1);
	write(1, "\n", 1);

	printf("input: %d\n", test2);
	ft_putnbr(test2);
	write(1, "\n", 1);

	printf("input: %d\n", test3);
	ft_putnbr(test3);
	write(1, "\n", 1);

	return (0);
}
*/
