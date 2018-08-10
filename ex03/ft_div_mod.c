/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumeny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:38:55 by adumeny           #+#    #+#             */
/*   Updated: 2018/08/09 12:50:34 by adumeny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int a;
	int b;
	int *div;
	int *mod;
	
	div = &a;
	mod = &b;

	ft_div_mod(12, 5, div, mod);
	printf("div = %d mod = %d", *div, *mod);
	return (0);
}
