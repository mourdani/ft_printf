/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 01:01:27 by mourdani          #+#    #+#             */
/*   Updated: 2019/12/27 10:35:29 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Recoded strdup libc function: Allocates sufficient memory for a copy of the
** string s1, does the copy, and returns a pointer to it
**
** s1: The string to be copied
**
** returns: A pointer to the copy
**          NULL otherwise
*/

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
