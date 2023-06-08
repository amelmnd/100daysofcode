/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:14:19 by amennad           #+#    #+#             */
/*   Updated: 2023/06/08 15:23:07 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		age;
	float	size;
	char	grade;

	age = 20;
	size = 1.69;
	grade = 'B';

	printf("L'utilisateur a %d ans et mesure %.2f m\n", age, size);
	printf("Il a une note de %c\n", grade);

}
