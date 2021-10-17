/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:03:27 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/17 17:42:43 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_ptr_len(unsigned long n)
{
	int	len;

	len = 0;
	while (n >= 16)
	{
		len++;
		n = n / 16;
	}
	return (len + 1);
}

void	ft_putnbr_hex(unsigned long n)
{
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
		ft_putnbr_hex(n % 16);
	}
	else if (n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putchar(n - 10 + 'a');
	}
}

int	ft_putptr(unsigned long n)
{
	ft_putstr("0x");
	ft_putnbr_hex(n);
	return (get_ptr_len(n) + 2);
}
