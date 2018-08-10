/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumeny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:52:20 by adumeny           #+#    #+#             */
/*   Updated: 2018/08/09 15:06:39 by adumeny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	a = *a / *b;
	b = *a % *b;
}

int		main(void)
{
	int x;
	int y;
	int *a;
	int *b;

	x = 12;
	y = 5;
	a = &x;
	b = &y;

	ft_ultimate_div_mod(a, b);
	printf (" a = %d b = %d", *a, *b);
	return(0);
}
