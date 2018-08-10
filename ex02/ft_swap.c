/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumeny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 13:35:05 by adumeny           #+#    #+#             */
/*   Updated: 2018/08/08 14:45:58 by adumeny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c = *a;
	 *a = *b;
	 *b = c;
}
int		main(void)
{
	int a;
	int b;

	a=2;
	b=4;
	ft_swap(&a,&b);
	printf("%d%d", a, b);
	return (0);
}
