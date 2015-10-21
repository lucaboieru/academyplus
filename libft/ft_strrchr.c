/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 18:25:40 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/21 22:44:13 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*new;

	new = NULL;
	while (*s)
	{
		if (*s == c)
			new = (char*)s;
		++s;
	}
	if (c == 0)
		new = (char*)s;
	return (new);
}
