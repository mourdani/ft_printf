/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:55:40 by mourdani          #+#    #+#             */
/*   Updated: 2021/01/25 13:28:48 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(0, &c, 1);
}

int	ft_printf(const char *s, ...)
{
	int i;
	
	i = 0;
	while(s[i] != '%')
	{
		ft_putchar(s[i]);
		i++;
	}
	
	return (1);

}

int main()
{
	ft_printf("this is a test %fds fasdf");
	return 0;
}

