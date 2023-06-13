/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:19:21 by amennad           #+#    #+#             */
/*   Updated: 2023/06/13 13:24:13 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	nb1;
	int	nb2;
	int	nb3;
	int	sum;

	printf("Entrez 3 entiers separes par des espaces : ");
	scanf("%d %d %d", &nb1, &nb2, &nb3);
	fflush(stdin);

	sum = (nb1 + nb2 + nb3);

	printf("\tSomme = %i\n", sum);
	printf("\tMoyenne= %f\n", (float)sum / 3);
	return (0);
}
