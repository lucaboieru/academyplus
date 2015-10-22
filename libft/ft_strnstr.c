/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 10:30:38 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/22 10:37:43 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		ok;
	
	if (!s2)
		return ((char *)s1);
	i = 0;
	while (*(s1 + i))
	{
		j = 0;
		ok = 1;
		while (*(s2 + j) && *(s1 + i + j))
		{
			if (*(s1 + i + j) != *(s2 + j))
				ok = 0;
			++j;
		}
		if (!ok)
			++i;
		else
			return ((char *)s1 + i);
	}
	return (NULL);
}
