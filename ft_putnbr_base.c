/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:14:54 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/17 16:23:07 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned long	i;

	i = 0;
	while (base[i])
		i++;
	if (i <= n)
		ft_putnbr_base(n / i, base);
	ft_putchar(base[n % i]);
}
