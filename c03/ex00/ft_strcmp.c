/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:39:24 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/22 12:34:23 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "helo";

	printf("s1 is '%s', s2 is '%s'\n", s1, s2);
	printf("strcmp: %d\n", strcmp(s1, s2));
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
}
*/
