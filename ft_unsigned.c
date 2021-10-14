/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 04:28:44 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/14 02:37:31 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_unb_len(unsigned int n)
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

char	*ft_uitoa(unsigned int nb)
{
	char	*num;
	int		i;
	int		len;

	i = 0;
	len = get_unb_len(nb);
	num = malloc(sizeof(char) * (len + 1));
	i = len - 1;
	num[len] = '\0';
	while (nb >= 10)
	{
		num[i--] = nb % 10 + 48;
		nb /= 10;
	}
	num[i] = nb % 10 + 48;
	return (num);
}

int	ft_unsigned(unsigned int n)
{
	char	*num;

	num = ft_uitoa(n);
	ft_putstr(num);
	free(num);
	return (get_unb_len(n));
}
