/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:37:01 by amennad           #+#    #+#             */
/*   Updated: 2023/06/15 12:46:24 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	c;

	printf("Entrez une lettre en minuscule : ");
	scanf("%c", &c);
	printf("Cela donne en majuscule : %c", c - 32);
	return (0);
}
