/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:03:27 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/15 01:26:20 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_ptr_len(unsigned long n)
{
	int	len;

	len = 0;
	while (n > 16)
	{
		len++;
		n = n / 16;
	}
	return (len + 1);
}

int	ft_putptr(unsigned long n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else if (n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putchar(n - 10 + 'a');
	}
	return (get_ptr_len(n) + 2);
}
