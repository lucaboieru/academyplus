/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 09:37:57 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/23 13:27:20 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	elem1;
	unsigned char	elem2;

	i = 0;
	while (i < n)
	{
		elem1 = *((unsigned char *)s1 + i);
		elem2 = *((unsigned char *)s2 + i);
		if (elem1 != elem2)
			return (elem1 - elem2);
		++i;
	}
	return (0);
}
