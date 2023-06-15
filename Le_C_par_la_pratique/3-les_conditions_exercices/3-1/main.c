/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:50:58 by amennad           #+#    #+#             */
/*   Updated: 2023/06/15 12:55:05 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	age;

	printf("Quel est votre age ? ");
	scanf("%d", &age);
	if (age >= 18)
		printf("Vous etes donc majeur");
	else
		printf("Vous etes donc mineur");
	return (0);
}
