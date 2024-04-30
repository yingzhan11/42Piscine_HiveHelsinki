/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:51:07 by yzhan             #+#    #+#             */
/*   Updated: 2024/01/16 13:54:41 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	rush00(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		return (0);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	rush00(x, y);
	return (0);
}
