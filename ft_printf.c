/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:48:35 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/17 16:52:06 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put(char x, va_list ptr)
{
	if (x == '%')
		ft_putchar('%');
	if (x == 'c')
		ft_putchar(va_arg(ptr, int));
	if (x == 'd' || x == 'i')
		ft_putnbr(va_arg(ptr, int));
	if (x == 's')
		ft_putstr(va_arg(ptr, char *));
	if (x == 'u')
		ft_putnbr(va_arg(ptr, unsigned int));
	if (x == 'x')
		ft_putnbr_base(va_arg(ptr, unsigned int), "0123456789abcdef");
	if (x == 'X')
		ft_putnbr_base(va_arg(ptr, unsigned int), "0123456789ABCDEF");
	if (x == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base(va_arg(ptr, unsigned long), "0123456789abcdef");
	}
}

int	ft_printf(const char *forma, ...)
{
	va_list(formaPtr);
	va_start(formaPtr, forma);
	g_return = 0;
	while (*forma)
	{
		if (*forma == '%')
		{
			forma++;
			if (*forma == '\0')
				return (g_return);
			ft_put(*forma, formaPtr);
		}
		else if (*forma == '\n')
			ft_putchar('\n');
		else
			ft_putchar(*forma);
		forma++;
	}
	va_end(formaPtr);
	return (g_return);
}
