/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:11:16 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/22 12:56:49 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		s = str;
		f = to_find;
		while (*f != '\0' && *s == *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello! How are you?";
	char	to_find[] = "How";

	char *sample = strstr(str, to_find);
	if (sample != NULL)
	{
		printf("strstr: found 'to_find' in str at place %ld\n", sample - str);
	}
	else
	{
		printf("strstr: not found 'to_find' in str\n");
	}

	char *result = ft_strstr(str, to_find);
	if (result != NULL)
	{
		printf("ft_strstr: found 'to_find' in str at place %ld\n", result - str);
	}
	else
	{
		printf("ft_strstr: not found 'to_find' in str\n");
	}
	return (0);
}
*/
