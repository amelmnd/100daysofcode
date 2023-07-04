/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:37:25 by amennad           #+#    #+#             */
/*   Updated: 2023/06/29 13:42:00 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>
int main()
{
	int a = 5;
	int b = 10;
	printf("a start %d\n", a);
	printf("b start %d\n", b);
	ft_swap(&a, &b);
	printf("a after  %d\n", a);
	printf("b after %d\n", b);
	return 0;
}
