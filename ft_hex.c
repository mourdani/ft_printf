/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 01:47:43 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/17 17:45:52 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_hex_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n >= 16)
	{
		len++;
		n = n / 16;
	}
	return (++len);
}

int	ft_puthex(unsigned int n, char format)
{
	int	len;

	len = get_hex_len(n);
	if (n >= 16)
	{
		ft_puthex(n / 16, format);
		ft_puthex(n % 16, format);
	}
	else if (n <= 9)
		ft_putchar(n + '0');
	else
	{
		if (format == 'x')
			ft_putchar(n - 10 + 'a');
		if (format == 'X')
			ft_putchar(n - 10 + 'A');
	}
	return (len);
}
