/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 15:18:03 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/21 18:24:54 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (len < size)
	{
		while (i < size - len - 1)
		{
			dst[i + len] = src[i];
			++i;
		}
		dst[i + len] = 0;
		return (len + ft_strlen(src));
	}
	else if (len == size)
		return (len + ft_strlen(src));
	else
		return (ft_strlen(src) + size);
}
