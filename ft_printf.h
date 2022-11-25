/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:36:14 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/17 16:19:29 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	g_return;

int		ft_printf(const char *forma, ...);
void	ft_putnbr_base(unsigned long n, char *base);
void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putnbr(long n);

#endif