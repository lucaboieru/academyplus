/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 10:30:38 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/22 14:59:20 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	src_len;
	
	if (!(*s2))
		return ((char *)s1);
    src_len = ft_strlen(s2);
	while (*s1 && n-- >= src_len)
	{
        if (!ft_memcmp(s1, s2, src_len))
		    return ((char *)s1);
        ++s1;
	}
	return (NULL);
}
