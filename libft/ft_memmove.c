/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 09:02:30 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/22 09:26:15 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (void *)malloc(len);
	while (i < len)
	{
		*(tmp + i) = *((unsigned char*)src + i);
		++i;
	}
	i = 0;
	while (i < len)
	{
		*((unsigned char*)dst + i) = *(tmp + i);
		++i;
	}
	free(tmp);
	return (dst);
}
