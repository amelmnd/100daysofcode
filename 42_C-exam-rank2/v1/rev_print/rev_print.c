/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:54:32 by amennad           #+#    #+#             */
/*   Updated: 2023/06/26 14:20:50 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int main (int argc, char *argv[])
{	
	int len;

	if (argc == 1)
		write(1, "\n", 1);
	else if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		printf("\nlen : %d\n", len);
		while (len > 0)
		{
			len--;
			write(1, &argv[1][len], 1);
		}
	}
	
	return (0);
}
