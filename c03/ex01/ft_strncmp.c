/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:19:35 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/22 18:07:55 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (*s1 == *s2 && *s1 && n > 0 && --n)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>
#define n 0

int	main(void)
{
	char	s1[] = "ello!";
	char	s2[] = "Hello! Hey!";

	printf("s1 is '%s'\n", s1);
	printf("s2 is '%s'\n", s2);
	printf("compare %d chars in s1 and s2\n", n);
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/
