#include "libft.h"

/*
** Recoded strncpy libc function: Copies up to len characters from
** the NULL-terminated string src to dst, NULL-terminating the result
**
** dst: A pointer to the destination string
** src: A pointer to the source string
** len: The maximum number of bytes to copy
**
** returns: A pointer to the destination string dst
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
