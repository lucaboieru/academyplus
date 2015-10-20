/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 19:22:13 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/20 21:10:23 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(char c);
int		ft_isprint(char c);
int		ft_isascii(char c);
int		ft_toupper(int c);
int		ft_tolower(int c);

int		ft_strlen(char *str);
int		ft_atoi(const char *str);
char	*ft_strdup(char *str);

#endif
