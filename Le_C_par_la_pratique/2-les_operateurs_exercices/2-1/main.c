/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:03:38 by amennad           #+#    #+#             */
/*   Updated: 2023/06/13 13:14:47 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	const float	taux = 1.08;
	float		sum_euro;
	float		sum_dollar;

	printf("Entrez un montant en Euro: ");
	scanf("%f", &sum_euro);
	fflush(stdin);

	sum_dollar = taux * sum_euro;
	printf("Le taux de change Euro->Dollar est de  %.2f\n", taux);
	printf("Vous avez donc %.2f Dollars\n", sum_dollar);
	return (0);
}
