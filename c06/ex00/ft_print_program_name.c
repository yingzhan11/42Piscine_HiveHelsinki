/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:06:31 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/25 15:14:17 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	str = argv[0];
	while (*str && argc > 0)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (0);
}
