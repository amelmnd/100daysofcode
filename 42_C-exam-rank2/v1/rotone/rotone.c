/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marv[1][i]n@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:41:09 by amennad           #+#    #+#             */
/*   Updated: 2023/06/29 13:11:22 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int c, char *v[])
{
	if (c < 2)
		write(1, "\n", 1);
	else 
	{
		int i = 0;
		while (v[1][i])
		{
			if (v[1][i] == 'Z')
				write(1, "A", 1);
			else if (v[1][i] == 'z')
				write(1, "a", 1);
			else if ((v[1][i] >= 65 && v[1][i] <= 90) || (v[1][i] >= 97 && v[1][i] <= 122))
			{	
				v[1][i] ++;
				write(1, &v[1][i], 1);
			}
			else
				write(1, &v[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return 0;

}
