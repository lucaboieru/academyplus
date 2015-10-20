/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 19:40:21 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/20 20:08:25 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("   +2147483647"));
	printf("%d\n", ft_atoi("feafafa  	1000"));
	printf("%d\n", ft_atoi("    3515    14"));
	printf("%d\n", ft_atoi("987654"));
	printf("%d\n", ft_atoi("  -41531"));
	return (0);
}
