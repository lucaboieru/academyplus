/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 08:45:19 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/22 08:51:51 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	elem;

	i = 0;
	while (i < n)
	{
		elem = *((unsigned char*)src + i);
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		++i;
		if (elem == (unsigned char)c)
			return (dst + i);
	}
	return (NULL);
}
