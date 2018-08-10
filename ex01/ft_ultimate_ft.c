/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumeny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:01:12 by adumeny           #+#    #+#             */
/*   Updated: 2018/08/08 14:29:26 by adumeny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int		main(void)
{
	int		a;
	int		*nbr;
	int		**nbr2;
	int		***nbr3;
	int		****nbr4;
	int		*****nbr5;
	int		******nbr6;
	int		*******nbr7;
	int		********nbr8;
	int		*********nbr9;

	a = 42;
	nbr = &a;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;;
	ft_ultimate_ft(nbr9);

	printf("la valeur de a est %d", a);
	return (0);
}
