/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:00:46 by amennad           #+#    #+#             */
/*   Updated: 2023/06/28 14:18:36 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = (res * 2) + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

void printbits(unsigned char octet)
{
	int nb = 256;

	while (nb >>= 1)
		(octet & nb) ? write(1, "1", 1) : write(1, "0", 1);
}

int	main(void)
{
	int	nb;

	nb = 4;
	printbits(nb);
	write(1, "\n", 1);
	printbits(reverse_bits(nb));
	write(1, "\n", 1);
	return (0);
}