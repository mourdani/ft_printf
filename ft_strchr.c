/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 00:38:03 by mourdani          #+#    #+#             */
/*   Updated: 2019/11/14 01:32:45 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurrence of c in the string
** pointed to by s
**
** s: The string to be scanned
** c: The character to be searched
**
** returns: A pointer to the located character
**          NULL otherwise
*/

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] != c)
		return (0);
	return (char *)(s + i);
}
