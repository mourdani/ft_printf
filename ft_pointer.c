/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:03:27 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/13 04:31:32 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_length(unsigned long num)
{
	int	len;

	len = 0;
	while (num > 16)
	{
		len++;
		num = num / 16;
	}
	return (len + 1);
}

int	ft_putptr(unsigned long num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else if (num <= 9)
		ft_putchar(num + '0');
	else
	{
		ft_putchar(num - 10 + 'a');
	}
	return (ptr_length(num) + 2);
}
