/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:11:44 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/31 13:07:40 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			length++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	length = length + (i * (size - 1));
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		index;
	int		i;
	int		j;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	joined = (char *)malloc((ft_strlen(size, strs, sep) + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	index = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			joined[index++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j] != '\0')
			joined[index++] = sep[j++];
		i++;
	}
	joined[index] = '\0';
	return (joined);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[4];
	char	*sep;
	int		size;
	char	*joined;

	strs[0] = "aa";
	strs[1] = "bb";
	strs[2] = "cc";
	strs[3] = "dd";
	sep = ", ";
	size = 4;
	joined = ft_strjoin(size, strs, sep);
	printf("%s\n", joined);
	free (joined);
	return (0);
}
*/
