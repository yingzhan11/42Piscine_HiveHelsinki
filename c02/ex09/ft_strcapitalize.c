/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:47:40 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/21 19:44:12 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	up;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			up = 0;
		else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			up = 0;
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			up = 0;
		else
			up = 1;
		if ('a' <= str[i] && str[i] <= 'z' && up == 1)
			str[i] -= 32;
		if ('A' <= str[i] && str[i] <= 'Z' && up == 0)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas";

	printf("Before transform: %s\n", str);
	printf("After transform: %s\n", ft_strcapitalize(str));
	return (0);
}
*/
