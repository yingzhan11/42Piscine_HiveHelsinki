/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:44:57 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/23 15:55:53 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[100] = "";
	char	src[] = "hello";
	char	test[100] = "";

	printf("src is : %s\n", src);
	printf("ft_strcpy, dest is: %s\n", ft_strcpy(dest, src));
	printf("strcpy, test is: %s\n", strcpy(test, src));
	return (0);
}
*/
