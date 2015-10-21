/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 13:55:04 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/21 14:00:46 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*new;
	size_t	i;

	new = s1;
	i = 0;
	while (*s1)
		++s1;
	while (i < n)
	{
		*s1 = *s2;
		++s1;
		++s2;
		++i;
	}
	*s1 = 0;
	return (new);
}