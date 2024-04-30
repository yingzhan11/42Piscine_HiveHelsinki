/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:01:43 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/31 13:04:03 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dest;

	length = 0;
	i = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dest = (char *)malloc((length + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
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
	char	*src;
	char	*dest;
	char	*test;

	src = "Hello";
	dest = ft_strdup(src);
	printf("ft_strdup: %s\n", dest);
	free (dest);
	test = strdup(src);
	printf("strdup: %s\n", test);
	return (0);
}
*/
