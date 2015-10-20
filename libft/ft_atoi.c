/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 19:47:42 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/20 20:07:09 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		final_val;
	int		is_negative;
	long	val;

	val = 0;
	is_negative = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	if (*str == '+')
		++str;
	else if (*str == '-')
	{
		++str;
		is_negative = 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + ((*str) - '0');
		++str;
	}
	if (is_negative)
		val = -val;	
	final_val = val;
	return (final_val);
}
