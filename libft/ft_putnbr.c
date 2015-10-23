/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 11:15:08 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/23 13:29:19 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbrrec(long n)
{
    if (n == 0)
        return ;
    ft_putnbrrec(n / 10);
    ft_putchar(n % 10 + '0');
}

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        write(1, "-", 1);
        ft_putnbrrec(-(long)n);
    }
    else if (n == 0)
        write(1, "0", 1);
    else
        ft_putnbrrec(n);
}
