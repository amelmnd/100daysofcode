/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:57:58 by amennad           #+#    #+#             */
/*   Updated: 2023/06/15 13:13:55 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int nb;
	int rest;

	printf("Combien avez-vous gagne? ");
	scanf("%d", &nb);
	if (nb < 1000)
		printf("Wow %d euros !", nb);
	else if (nb > 1000 && nb < 1000000)
	{	
		rest = nb % 1000;
		printf("Wow %d ", nb /1000);
		printf("%d euros !", rest);
	}
	return (0);
}
