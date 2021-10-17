/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:28:44 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/17 17:45:41 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_unum_len(unsigned int n)
{
	int		len;

	len = 0;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (++len);
}

void	ft_putunbr(unsigned int n)
{
	if (n >= 10)
	{
		ft_putunbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

int	ft_putunum(unsigned int n)
{
	ft_putunbr(n);
	return (get_unum_len(n));
}
