/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:21:15 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/18 12:28:53 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 5;
	printf("Before calculation, a is %d, b is %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After calculation, a(division) is %d, b(remainder) is %d\n", a, b);
	return (0);
}
*/
