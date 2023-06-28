/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:32:57 by amennad           #+#    #+#             */
/*   Updated: 2023/06/26 13:48:40 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


int main(int argc, char *argv[])
{
	int i;
	int y;

	if (argc == 1)
	   write (1, "\n", 1);
	if (argc == 2)
	{
		i = 0;
		while(argv[1][i])
		{
			if (argv[1][i] == 32 && argv[1][i - 1] > 32)
			{
				y = 0;
				while (argv[1][y] && y < i)
				{
					write(1, &argv[1][y], 1);
					y++;
				}
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}	
	return (0);
}
