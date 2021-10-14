/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:28:44 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/15 01:19:54 by mourdani         ###   ########.fr       */
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
	len++;
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		i;
	int		len;

	i = 0;
	len = get_unum_len(n);
	num = malloc(sizeof(char) * (len + 1));
	i = len - 1;
	num[len] = '\0';
	while (n >= 10)
	{
		num[i--] = n % 10 + 48;
		n /= 10;
	}
	num[i] = n % 10 + 48;
	return (num);
}

int	ft_putunum(unsigned int n)
{
	char	*num;

	num = ft_uitoa(n);
	ft_putstr(num);
	free(num);
	return (get_unum_len(n));
}
