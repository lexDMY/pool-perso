/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumeny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:14:39 by adumeny           #+#    #+#             */
/*   Updated: 2018/08/10 14:04:59 by adumeny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_strlen(char *str)
{
	int	a;
	a = 0;
	while(str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int		main(void)
{
  char		*str;

	str = "martian manhunter";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
}
