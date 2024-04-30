/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:55:19 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/22 12:47:21 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#define nb 3

int	main(void)
{
	char	dest[1000] = "he";
	char	src[1000] = "llo";
	char	test_cmp [1000] = "he";

	printf("dest is '%s', src is '%s'\n", dest, src);
	printf("copy %d chars from src to dest\n", nb);
	printf("strncat function: %s\n", strncat(test_cmp, src, nb));
	printf("ft_strncat function: %s\n", ft_strncat(dest, src, nb));
	return (0);
}
*/
