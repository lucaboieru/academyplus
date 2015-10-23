/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:30:59 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/23 14:37:50 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbrrec_fd(long n, int fd)
{
    if (n == 0)
        return ;
    ft_putnbrrec_fd(n / 10, fd);
    ft_putchar_fd(n % 10 + '0', fd);
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        write(fd, "-", 1);
        ft_putnbrrec_fd(-(long)n, fd);
    }
    else if (n == 0)
        write(fd, "0", 1);
    else
        ft_putnbrrec_fd(n, fd);
}
