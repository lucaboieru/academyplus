/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 19:40:21 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/21 09:29:16 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	printf("%d -> %s\n", (int)ft_strlen("hello world\n"), ft_strdup("hello world\n"));
	return (0);
}
