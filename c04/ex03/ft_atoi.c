/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:40:06 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/24 14:52:47 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	out;

	i = 0;
	minus = 1;
	out = 0;
	if (str[i] == 0)
		return (out);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (str[i] - '0') + (out * 10);
		i++;
	}
	return (out * minus);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "  ---+-+1234ab567";
	printf("str: %s\n", str);
	printf("atoi: %d\n", ft_atoi(str));
	return (0);
}
*/
