/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:34:05 by amennad           #+#    #+#             */
/*   Updated: 2023/06/14 14:01:16 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	while (i <= 9)
	{
		c = i + 48;
		write(1, &c, 1);
		i++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
