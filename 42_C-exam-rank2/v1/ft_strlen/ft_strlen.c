/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:32:18 by amennad           #+#    #+#             */
/*   Updated: 2023/06/26 14:42:33 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
	/*
	if (*str)
		return (1+ft_strlen(str+1));
	*/
	int i = 0;
	while (str[++i]);
	return(i);
}

int main(int c,char **v)
{
	c=0;
	printf("%d", ft_strlen(v[1]));

	return(0);
}
