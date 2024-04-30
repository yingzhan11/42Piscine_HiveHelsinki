/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:37:35 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/14 15:05:48 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 123;
	while (--c > 96)
	{
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
