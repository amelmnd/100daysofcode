/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:30:07 by amennad           #+#    #+#             */
/*   Updated: 2023/06/13 12:55:57 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		age;
	float	size;
	char	prenom;
	char	nom;

	printf("Donnez votre age et taille en metre : ");
	scanf("%d %f", &age, &size);
	fflush(stdin);

	printf("Donnez vos initiales: ");
	scanf("%c %c", &prenom, &nom);
	fflush(stdin);

	printf("Vous avez %d ans et vous mesurez %0.2f m\n", age, size);
	printf("Vos initiales sont %c %c", prenom, nom);
	return (0);
}
