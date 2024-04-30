/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:45:32 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/25 19:04:31 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#define n 3

int	main(void)
{
	char	src[] = "hello";
	char	dest[20] = "-------------------";
	char	test[20] = "-------------------";

	printf("str: %s\n", src);
	printf("dest: %s\n", dest);
	printf("ft_strncpy: %s\n", ft_strncpy(dest, src, n));
	printf("strncpy: %s\n", strncpy(test,src, n));
	return (0);
}
*/
