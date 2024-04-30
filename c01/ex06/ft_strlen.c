/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:38:53 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/18 13:09:19 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	str = "hey!";
	printf("%d", ft_strlen(str));
	return (0);
}
*/
