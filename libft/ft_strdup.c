/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 08:59:36 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/21 09:26:27 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(*new) * (ft_strlen(s1) + 1));
	while (s1[i])
	{
		new[i] = s1[i];
		++i;
	}
	new[i] = 0;
	return (new);
}
