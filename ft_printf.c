/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 09:55:40 by mourdani          #+#    #+#             */
/*   Updated: 2021/01/26 00:58:37 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;
	int		a;

	i = 0;
	a = ft_strlen(src);
	if (!(str = malloc(sizeof(char) * (a + 1))))
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			write(1, &s[i++], 1);
}

int	ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] != c)
		return (0);
	return ( i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

int	ft_printf(const char *s, ...)
{
	char *buff;
	char *conv;
	int i;

	buff = ft_strdup(s);
	conv = ft_substr(s, ft_strchr(s, '%'), ft_strchr(s + ft_strchr(s, '%'), ' '));
	ft_putstr(buff);
	ft_putstr("\n");
	ft_putstr(conv);
	ft_putstr("\n");
	return (0);
}

int main()
{
	ft_printf("this is a test %s hola vpn");
}
