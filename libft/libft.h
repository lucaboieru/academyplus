/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboieru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 19:22:13 by lboieru           #+#    #+#             */
/*   Updated: 2015/10/20 19:38:17 by lboieru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isprint(char c);
int		ft_isascii(char c);
char	ft_toupper(char c);
char	ft_tolower(char c);

int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_strdup(char *str);

#endif
