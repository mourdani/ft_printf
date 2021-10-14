/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 06:21:16 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/15 01:14:57 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

int	ft_putnum(int n)
{
	int	len;

	len = get_num_len(n);
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnum(-n);
	}
	else if (n >= 10)
	{
		ft_putnum(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
	return (len);
}
