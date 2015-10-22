/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 08:51:55 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/22 14:47:50 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	a[] = "hello world!";
	char	c[] = "llo";

	printf("%s\n", ft_strnstr(a, c, 5));
	printf("%s\n", strnstr(a, c, 5));
	return (0);
}
