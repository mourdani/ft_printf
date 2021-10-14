/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 01:47:43 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/14 02:34:22 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_length(unsigned int num)
{
	int	len;

	len = 0;
	while (num >= 16)
	{
		len++;
		num = num / 16;
	}
	len++;
	return (len);
}

int	dec_to_hex(unsigned int num, char format)
{
	int	len;

	len = hex_length(num);
	if (num >= 16)
	{
		dec_to_hex(num / 16, format);
		dec_to_hex(num % 16, format);
	}
	else if (num <= 9)
		ft_putchar(num + '0');
	else
	{
		if (format == 'x')
			ft_putchar(num - 10 + 'a');
		if (format == 'X')
			ft_putchar(num - 10 + 'A');
	}
	return (len);
}
