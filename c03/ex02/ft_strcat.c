/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:44:40 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/22 12:42:14 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[10] = "hel";
	char	src[10] = "lo";
	char	cpy_dest[10] = "hel";

	printf("dest is '%s', src is '%s'\n", dest, src);
	printf("after strcat: dest is '%s'\n", strcat(cpy_dest, src));
	printf("after ft_strcat: dest is '%s'\n", ft_strcat(dest, src));
	return (0);
}
*/
