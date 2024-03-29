/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:02:25 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/17 18:59:33 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> 

int	ft_format(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, const char *)));
	else if (format == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnum(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunum(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_puthex(va_arg(args, int), 'x'));
	else if (format == 'X')
		return (ft_puthex(va_arg(args, int), 'X'));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	str_length;

	va_list(args);
	i = 0;
	str_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			str_length += ft_format(str[i + 1], args);
			i++;
			if (str[i] == '%' || str[i] == 'X' || str[i] == 'x'
				|| str[i] == 'u' || str[i] == 'd' || str[i] == 'i'
				|| str[i] == 'p' || str[i] == 's' || str[i] == 'c')
				i++;
		}
		else
		{
			str_length += ft_putchar(str[i]);
			i++;
		}
	}
	return (str_length);
}
