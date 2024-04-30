/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:41:43 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/18 12:11:53 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
#include <stdio.h>
int	main(void)
{
	int	nu1;
	int	nu2;
	int	*a;
	int	*b;

	nu1 = 5;
	nu2 = 2;
	a = &nu1;
	b = &nu2;
	printf("Before swap, a is %d, b is %d\n", nu1, nu2);
	ft_swap(a, b);
	printf("After swap, a is %d, b is %d\n", nu1, nu2);
	return (0);
}
*/
