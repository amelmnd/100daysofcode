/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:56:31 by amennad           #+#    #+#             */
/*   Updated: 2023/06/13 12:59:07 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	letter;

	printf("Entrez une lettre : ");
	scanf("%c", &letter);
	fflush(stdin);

	printf("Vous avez entrez la lettre ASCII %c , soit:\n", letter);
	printf("\t- %d en decimal\n", letter);
	printf("\t- %x en hexadecimal\n", letter);
	return (0);
}