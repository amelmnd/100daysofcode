/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:49:48 by amennad           #+#    #+#             */
/*   Updated: 2023/06/28 13:58:16 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
	int	bits;

	bits = 256;
	while (bits >>= 1)
		(octet & bits) ? write(1, "1", 1) : write(1, "0", 1);
}

int	main(void)
{
	int	nb;

	//swap_bits(nb);
	nb = 360;
	print_bits(nb);
	write(1, "\n", 1);
	print_bits(swap_bits(nb));
	return (0);
}
