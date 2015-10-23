/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:41:25 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/23 16:30:55 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_chars(int n)
{
	int		no_of_chars;
	long	n_cpy;

	if (n <= 0)
	{
		no_of_chars = 1;
		n_cpy = -n;
	}
	else
	{
		no_of_chars = 0;
		n_cpy = n;
	}
	while (n_cpy)
	{
		++no_of_chars;
		n_cpy /= 10;
	}
	return (no_of_chars);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		no_of_chars;
	long	n_cpy;
	int		i;

	no_of_chars = ft_count_chars(n);
	new = (char *)malloc(no_of_chars);
	i = no_of_chars - 1;
	n_cpy = n;
	if (n < 0)
	{
		*new = '-';
		n_cpy = -(long)n;
	}
	else if (n == 0)
		*new = '0';
	while (i >= 0 && n_cpy)
	{
		*(new + i) = n_cpy % 10 + '0';
		n_cpy /= 10;
		--i;
	}
	*(new + no_of_chars) = 0;
	return (new);
}
