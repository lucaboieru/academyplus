/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 18:08:26 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/23 13:30:56 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*new;

	new = NULL;
	while (*s)
	{
		if (*s == c)
		{
			new = (char*)s;
			return (new);
		}
		++s;
	}
	if (c == 0)
		new = (char*)s;
	return (new);
}
