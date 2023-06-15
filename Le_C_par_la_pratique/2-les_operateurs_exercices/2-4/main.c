/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:25:02 by amennad           #+#    #+#             */
/*   Updated: 2023/06/15 12:35:33 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	heigth;
	int	width;
	int	perimeter;
	int	area;

	printf("Donnez la hauteur et la largeur du rectangle : ");
	scanf("%d %d", &heigth, &width);
	perimeter = 2 * heigth + 2 * width;
	area = width * heigth;
	printf("\tPerimetre = %d\n", perimeter);
	printf("\tSurface = %d\n", area);
	return (0);
}
