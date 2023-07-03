/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:47:08 by amennad           #+#    #+#             */
/*   Updated: 2023/07/03 15:56:12 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\n';
	return (s1);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[5];
	char *s2 = "titi";

	printf("%s", ft_strcpy(s1, s2));
	return 0;
}